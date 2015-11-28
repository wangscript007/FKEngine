/********************************************************************
*
*	���ļ���FKMMORPG��һ���֡����ļ���Ȩ����FreeKnightDuzhi(������)���С�
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	�ļ�����	D3D9PixelShader
*	���ߣ�		FreeKnightDuzhi[ ������ ]
*	�ļ�˵����	D3D9 ������ɫ��
*
*	�޸���:		
*	�޸�����:
*********************************************************************/

#pragma once

//==================================================================================================================
struct IDirect3DPixelShader9;
//--------------------------------------------------------------------------------------------------------------

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	// D3D9 ������ɫ��
	class FK_DLL D3D9PixelShader : public PixelShader
	{
	protected:
		IDirect3DPixelShader9*		mpD3D9PS;

	public:
		D3D9PixelShader();
		~D3D9PixelShader();

		//����������ɫ��
		void BuildPixelShader();

		//����������ɫ��
		void SetPixelShader();

		//����������ɫ������
		void SetPixelShaderParam();

		//�ͷ�������ɫ��
		void ReleasePixelShader();
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================