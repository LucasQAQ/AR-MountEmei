Shader "Unlit/UnlitShader"
{
	Properties
	{
		//[Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend("Src Blend",int) = 0
		//[Enum(UnityEngine.Rendering.BlendMode)] _DstBlend("Dst Blend",int) = 0
		_MainTex("Texture", 2D) = "white" {}
		_Color("Color",color) = (1,1,1,1)
		_AlphaScale("Alpha Scale", Range(0, 1)) = 1
		_VerticalBillboarding("Vertical Restraints", Range(0, 1)) = 1
	}

		SubShader
		{
			Pass
			{
				Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" "DisableBatching" = "True"}

				ZWrite Off
				Cull off
				LOD 100
				Blend SrcAlpha OneMinusSrcAlpha
				CGPROGRAM

				#pragma vertex vert
				#pragma fragment frag

				#include "UnityCG.cginc"
				#include "Lighting.cginc"

				struct appdata
				{
					float4 vertex : POSITION;
					float2 uv : TEXCOORD0;
				};

				struct v2f
				{
					float2 uv : TEXCOORD0;
					float4 pos : SV_POSITION;
				};

				sampler2D _MainTex;
				float4 _MainTex_ST;
				fixed _AlphaScale;
				fixed4 _Color;
				fixed _VerticalBillboarding;

				v2f vert(appdata v)
				{
					v2f o;

					float3 center = float3(0, 0, 0);
					float3 viewer = mul(unity_WorldToObject, float4(_WorldSpaceCameraPos, 1));

					float3 normalDir = viewer - center;
					normalDir.y = normalDir.y * _VerticalBillboarding;
					normalDir = normalize(normalDir);
					float3 upDir = abs(normalDir.y) > 0.999 ? float3(0, 0, 1) : float3(0, 1, 0);
					float3 rightDir = normalize(cross(upDir, normalDir));
					upDir = normalize(cross(normalDir, rightDir));
					float3 centerOffs = v.vertex.xyz - center;
					float3 localPos = center + rightDir * centerOffs.x + upDir * centerOffs.y + normalDir * centerOffs.z;

					o.pos = UnityObjectToClipPos(float4(localPos, 1));
					//o.pos = UnityObjectToClipPos(v.vertex);
					o.uv = TRANSFORM_TEX(v.uv, _MainTex);
					return o;
				}

				fixed4 frag(v2f i) : SV_Target
				{
					fixed4 c;
					c = tex2D(_MainTex,i.uv);


					return fixed4(c.rgb, c.a*_AlphaScale);
				}
				ENDCG
			}
		}
}
