// SampleOcxCtrl.cpp : CSampleOcxCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "SampleOcx.h"
#include "SampleOcxCtrl.h"
#include "SampleOcxPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CSampleOcxCtrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSampleOcxCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CSampleOcxCtrl, COleControl)
	DISP_FUNCTION_ID(CSampleOcxCtrl, "ChangeMe", dispidChangeMe, ChangeMe, VT_EMPTY, VTS_BSTR VTS_I4)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CSampleOcxCtrl, COleControl)
	EVENT_CUSTOM_ID("NameChanged", eventidNameChanged, NameChanged, VTS_BSTR VTS_BSTR)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CSampleOcxCtrl, 1)
	PROPPAGEID(CSampleOcxPropPage::guid)
END_PROPPAGEIDS(CSampleOcxCtrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSampleOcxCtrl, "SAMPLEOCX.SampleOcxCtrl.1",
	0xb8e76bd2, 0xa539, 0x4a75, 0x98, 0x75, 0x59, 0x87, 0x17, 0x53, 0x6a, 0x2d)



// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CSampleOcxCtrl, _tlid, _wVerMajor, _wVerMinor)



// �ӿ� ID

const IID IID_DSampleOcx = { 0x2181AC23, 0x134A, 0x449B, { 0x97, 0x5B, 0x33, 0x7F, 0xC0, 0xE7, 0x55, 0xA } };
const IID IID_DSampleOcxEvents = { 0xB3F7582F, 0xB04D, 0x4CF6, { 0xAD, 0xEC, 0x7F, 0x37, 0xC5, 0x3A, 0x83, 0xE7 } };


// �ؼ�������Ϣ

static const DWORD _dwSampleOcxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSampleOcxCtrl, IDS_SAMPLEOCX, _dwSampleOcxOleMisc)



// CSampleOcxCtrl::CSampleOcxCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSampleOcxCtrl ��ϵͳע�����

BOOL CSampleOcxCtrl::CSampleOcxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_SAMPLEOCX,
			IDB_SAMPLEOCX,
			afxRegApartmentThreading,
			_dwSampleOcxOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CSampleOcxCtrl::CSampleOcxCtrl - ���캯��

CSampleOcxCtrl::CSampleOcxCtrl()
	: m_name(_T(""))
	, m_color(0)
{
	InitializeIIDs(&IID_DSampleOcx, &IID_DSampleOcxEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}



// CSampleOcxCtrl::~CSampleOcxCtrl - ��������

CSampleOcxCtrl::~CSampleOcxCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}



// CSampleOcxCtrl::OnDraw - ��ͼ����

void CSampleOcxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	RECT r;
	r.top = rcBounds.top;
	r.bottom = rcBounds.bottom;
	r.left = rcBounds.left;
	r.right = rcBounds.right;
	pdc->SetDCPenColor(RGB(GetRValue(m_color), GetGValue(m_color), GetBValue(m_color)));
	pdc->DrawText(m_name, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}



// CSampleOcxCtrl::DoPropExchange - �־���֧��

void CSampleOcxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CSampleOcxCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CSampleOcxCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CSampleOcxCtrl ��Ϣ�������


void CSampleOcxCtrl::ChangeMe(LPCTSTR name, LONG color)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: �ڴ���ӵ��ȴ���������
	CString prev = m_name;
	m_color = color;
	m_name = name;

	NameChanged(prev, name);
	Invalidate();
}
