// SampleOcxCtrl.cpp : CSampleOcxCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "SampleOcx.h"
#include "SampleOcxCtrl.h"
#include "SampleOcxPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CSampleOcxCtrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CSampleOcxCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CSampleOcxCtrl, COleControl)
	DISP_FUNCTION_ID(CSampleOcxCtrl, "ChangeMe", dispidChangeMe, ChangeMe, VT_EMPTY, VTS_BSTR VTS_I4)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CSampleOcxCtrl, COleControl)
	EVENT_CUSTOM_ID("NameChanged", eventidNameChanged, NameChanged, VTS_BSTR VTS_BSTR)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CSampleOcxCtrl, 1)
	PROPPAGEID(CSampleOcxPropPage::guid)
END_PROPPAGEIDS(CSampleOcxCtrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSampleOcxCtrl, "SAMPLEOCX.SampleOcxCtrl.1",
	0xb8e76bd2, 0xa539, 0x4a75, 0x98, 0x75, 0x59, 0x87, 0x17, 0x53, 0x6a, 0x2d)



// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CSampleOcxCtrl, _tlid, _wVerMajor, _wVerMinor)



// 接口 ID

const IID IID_DSampleOcx = { 0x2181AC23, 0x134A, 0x449B, { 0x97, 0x5B, 0x33, 0x7F, 0xC0, 0xE7, 0x55, 0xA } };
const IID IID_DSampleOcxEvents = { 0xB3F7582F, 0xB04D, 0x4CF6, { 0xAD, 0xEC, 0x7F, 0x37, 0xC5, 0x3A, 0x83, 0xE7 } };


// 控件类型信息

static const DWORD _dwSampleOcxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSampleOcxCtrl, IDS_SAMPLEOCX, _dwSampleOcxOleMisc)



// CSampleOcxCtrl::CSampleOcxCtrlFactory::UpdateRegistry -
// 添加或移除 CSampleOcxCtrl 的系统注册表项

BOOL CSampleOcxCtrl::CSampleOcxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// CSampleOcxCtrl::CSampleOcxCtrl - 构造函数

CSampleOcxCtrl::CSampleOcxCtrl()
	: m_name(_T(""))
	, m_color(0)
{
	InitializeIIDs(&IID_DSampleOcx, &IID_DSampleOcxEvents);
	// TODO: 在此初始化控件的实例数据。
}



// CSampleOcxCtrl::~CSampleOcxCtrl - 析构函数

CSampleOcxCtrl::~CSampleOcxCtrl()
{
	// TODO: 在此清理控件的实例数据。
}



// CSampleOcxCtrl::OnDraw - 绘图函数

void CSampleOcxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	RECT r;
	r.top = rcBounds.top;
	r.bottom = rcBounds.bottom;
	r.left = rcBounds.left;
	r.right = rcBounds.right;
	pdc->SetDCPenColor(RGB(GetRValue(m_color), GetGValue(m_color), GetBValue(m_color)));
	pdc->DrawText(m_name, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}



// CSampleOcxCtrl::DoPropExchange - 持久性支持

void CSampleOcxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CSampleOcxCtrl::OnResetState - 将控件重置为默认状态

void CSampleOcxCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CSampleOcxCtrl 消息处理程序


void CSampleOcxCtrl::ChangeMe(LPCTSTR name, LONG color)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此添加调度处理程序代码
	CString prev = m_name;
	m_color = color;
	m_name = name;

	NameChanged(prev, name);
	Invalidate();
}
