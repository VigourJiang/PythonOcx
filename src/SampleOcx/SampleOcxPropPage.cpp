// SampleOcxPropPage.cpp : CSampleOcxPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "SampleOcx.h"
#include "SampleOcxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CSampleOcxPropPage, COlePropertyPage)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSampleOcxPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSampleOcxPropPage, "SAMPLEOCX.SampleOcxPropPage.1",
	0x725c85e6, 0xa0b6, 0x43c3, 0x8c, 0x2e, 0xc7, 0x5, 0xcb, 0xe6, 0x79, 0xc4)



// CSampleOcxPropPage::CSampleOcxPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSampleOcxPropPage ��ϵͳע�����

BOOL CSampleOcxPropPage::CSampleOcxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SAMPLEOCX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CSampleOcxPropPage::CSampleOcxPropPage - ���캯��

CSampleOcxPropPage::CSampleOcxPropPage() :
	COlePropertyPage(IDD, IDS_SAMPLEOCX_PPG_CAPTION)
{
}



// CSampleOcxPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CSampleOcxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CSampleOcxPropPage ��Ϣ�������
