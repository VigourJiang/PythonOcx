// OcxWnd.cpp : 实现文件
//

#include "stdafx.h"
#include "OcxWnd.h"

#include <afxpriv2.h>


#define IMPLTYPE_MASK					( IMPLTYPEFLAG_FDEFAULT | IMPLTYPEFLAG_FSOURCE |  IMPLTYPEFLAG_FRESTRICTED )
#define IMPLTYPE_DEFAULTSOURCE			( IMPLTYPEFLAG_FDEFAULT | IMPLTYPEFLAG_FSOURCE )
#define IMPLTYPE_DEFAULTINTERFACE		( IMPLTYPEFLAG_FDEFAULT )

// COcxWnd

IMPLEMENT_DYNAMIC(COcxWnd, CWnd)
COcxWnd::COcxWnd()
{
}

COcxWnd::~COcxWnd()
{
}

LPUNKNOWN	COcxWnd::Create(IID iid, CWnd* pParentWnd ) 
{
	BOOL bRet = CreateControl( iid ,L"",0,CRect(0,0,100,100), pParentWnd,0 ); 
	if( bRet )
	{
		return GetControlUnknown() ;
	}
	else
	{
		return 0;
	}
}

BOOL	COcxWnd::GetControlInfo() 
{
		LPUNKNOWN	lp = GetControlUnknown() ;
		if( lp == NULL )
		{
			// TrcWritef( EC_FATAL , "get ocx control info failed , GetControlUnknown" ) ;
			return FALSE ;
		}
	
	return TRUE ;
}


BEGIN_MESSAGE_MAP(COcxWnd, CWnd)
END_MESSAGE_MAP()

