// SampleOcx.cpp : CSampleOcxApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "SampleOcx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CSampleOcxApp theApp;

const GUID CDECL _tlid = { 0x68860447, 0xA411, 0x47F5, { 0x88, 0x2C, 0x6, 0x4F, 0xA4, 0xB4, 0x5F, 0xD7 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CSampleOcxApp::InitInstance - DLL ��ʼ��

BOOL CSampleOcxApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CSampleOcxApp::ExitInstance - DLL ��ֹ

int CSampleOcxApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
