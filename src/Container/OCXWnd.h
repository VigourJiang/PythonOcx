#pragma once



// ÿһ�����ؽ�����ocx�ؼ�����Ӧһ��COcxWnd����
class COcxWnd : public CWnd
{
	DECLARE_DYNAMIC(COcxWnd)

public:
	COcxWnd();
	virtual ~COcxWnd();
	
	LPUNKNOWN	Create(IID iid,CWnd* pParentWnd ) ;
private:
	BOOL	 GetControlInfo() ;

protected:
	DECLARE_MESSAGE_MAP()
};


