/********************************************************************
*
*	���ļ���FKMMORPG��һ���֡����ļ���Ȩ����FreeKnightDuzhi(������)���С�
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	�ļ�����	RenderGroup
*	���ߣ�		FreeKnightDuzhi[ ������ ]
*	�ļ�˵����	��Ⱦ����
*
*	�޸���:		
*	�޸�����:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//��Ⱦ����
	class FK_DLL RenderGroup
	{
	public:
		UINT				mnPriority;			//��Ⱦ�����ȼ�

		RenderUnit*			mpHeadRenderUnit;	//��ʼ��Ⱦ��Ԫ
		RenderUnit*			mpRearRenderUnit;	//��β��Ⱦ��Ԫ

	public:
		//������Ⱦ��
		void SortRenderGroup( RenderSubGroupStack* pRenderSubGroupStack, const Camera* pCamera  );
	};
	//--------------------------------------------------------------------------------------------------------------
	typedef Stack< RenderGroup >	RenderGroupStack;
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================