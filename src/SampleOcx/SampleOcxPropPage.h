#pragma once

// SampleOcxPropPage.h : CSampleOcxPropPage 属性页类的声明。


// CSampleOcxPropPage : 有关实现的信息，请参阅 SampleOcxPropPage.cpp。

class CSampleOcxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSampleOcxPropPage)
	DECLARE_OLECREATE_EX(CSampleOcxPropPage)

// 构造函数
public:
	CSampleOcxPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_SAMPLEOCX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

