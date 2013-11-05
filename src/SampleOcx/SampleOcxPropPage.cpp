// SampleOcxPropPage.cpp : CSampleOcxPropPage 属性页类的实现。

#include "stdafx.h"
#include "SampleOcx.h"
#include "SampleOcxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CSampleOcxPropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CSampleOcxPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSampleOcxPropPage, "SAMPLEOCX.SampleOcxPropPage.1",
	0x725c85e6, 0xa0b6, 0x43c3, 0x8c, 0x2e, 0xc7, 0x5, 0xcb, 0xe6, 0x79, 0xc4)



// CSampleOcxPropPage::CSampleOcxPropPageFactory::UpdateRegistry -
// 添加或移除 CSampleOcxPropPage 的系统注册表项

BOOL CSampleOcxPropPage::CSampleOcxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SAMPLEOCX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CSampleOcxPropPage::CSampleOcxPropPage - 构造函数

CSampleOcxPropPage::CSampleOcxPropPage() :
	COlePropertyPage(IDD, IDS_SAMPLEOCX_PPG_CAPTION)
{
}



// CSampleOcxPropPage::DoDataExchange - 在页和属性间移动数据

void CSampleOcxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CSampleOcxPropPage 消息处理程序
