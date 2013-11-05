#pragma once



// 每一个加载进来的ocx控件，对应一个COcxWnd对象
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


