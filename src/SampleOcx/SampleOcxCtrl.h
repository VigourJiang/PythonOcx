#pragma once

// SampleOcxCtrl.h : CSampleOcxCtrl ActiveX �ؼ����������


// CSampleOcxCtrl : �й�ʵ�ֵ���Ϣ������� SampleOcxCtrl.cpp��

class CSampleOcxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSampleOcxCtrl)

// ���캯��
public:
	CSampleOcxCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CSampleOcxCtrl();

	DECLARE_OLECREATE_EX(CSampleOcxCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CSampleOcxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSampleOcxCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CSampleOcxCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
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

