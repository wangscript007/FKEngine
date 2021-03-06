/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	UVASprite
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	
*
*	修改人:		
*	修改内容:
*********************************************************************/

#include "../../include/RenderWrapper/RenderWrapperInsideHeader.h"

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	UVASprite::UVASprite( Sprite* pSprite, UVAnimation* pUVAnimation )
		: UVAControl	(pUVAnimation)
		, mpSprite		(pSprite)
	{
	}
	//--------------------------------------------------------------------------------------------------------------
	//更新动画帧时间
	void FKFastcall UVASprite::UpdateFrameTime( float fFrameTime )
	{
		//如果已经改变播放帧
		UVAFrame* pNextFrame = UVAControl::UpdateFrameTime( fFrameTime );
		if( pNextFrame != NULL )
			mpSprite->SetSpriteUV( &pNextFrame->sUV4 );
	}
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
