#pragma once

// SampleOcxCtrl.h : CSampleOcxCtrl ActiveX 控件类的声明。


// CSampleOcxCtrl : 有关实现的信息，请参阅 SampleOcxCtrl.cpp。

class CSampleOcxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSampleOcxCtrl)

// 构造函数
public:
	CSampleOcxCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CSampleOcxCtrl();

	DECLARE_OLECREATE_EX(CSampleOcxCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CSampleOcxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSampleOcxCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CSampleOcxCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		eventidNameChanged = 1L,
		dispidChangeMe = 1L
	};
protected:
	void ChangeMe(LPCTSTR name, LONG color);

	void NameChanged(LPCTSTR prevValue, LPCTSTR newValue)
	{
		FireEvent(eventidNameChanged, EVENT_PARAM(VTS_BSTR VTS_BSTR), prevValue, newValue);
	}
public:
	CString m_name;
	long m_color;
};

