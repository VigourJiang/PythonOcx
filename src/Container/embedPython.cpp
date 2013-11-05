#include "stdafx.h"
#include "..\pymod\pymod.h"
#pragma comment (lib, "_pymod.lib")

#include "Objbase.h"


#include <Python.h>


void startPython()
{
	Py_Initialize();

	PyRun_SimpleString("import sys");
	//PyRun_SimpleString("sys.path.append(r'D:\\python\\code\\embedMain\\Debug')");
	//PyRun_SimpleString("print(sys.path)"); 
	PyObject* g = PyDict_New();
	if (!g)
		return ;

	PyDict_SetItemString(g, "__builtins__", PyEval_GetBuiltins());
	PyRun_StringFlags("import cdmop", Py_file_input, g, g, NULL);
	PyRun_SimpleString("import cdmop"); 
	PyRun_StringFlags("cdmop.func()", Py_file_input, g, g, NULL); 

	Py_Finalize();
}
