#pragma once

// SampleOcxPropPage.h : CSampleOcxPropPage ����ҳ���������


// CSampleOcxPropPage : �й�ʵ�ֵ���Ϣ������� SampleOcxPropPage.cpp��

class CSampleOcxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSampleOcxPropPage)
	DECLARE_OLECREATE_EX(CSampleOcxPropPage)

// ���캯��
public:
	CSampleOcxPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_SAMPLEOCX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

