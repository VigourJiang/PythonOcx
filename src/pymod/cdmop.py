import pythoncom
import pymod
import pywintypes
import win32com
import win32com.client
import json

from ctypes import *
user32 = windll.LoadLibrary('user32.dll')             

class EventHandler:
    def OnNameChanged(self, prev, cur):
        user32.MessageBoxW(0, prev + "->" + cur, 'OnReadRawDataComplete', 0)

addr = pymod.getOcxPointer()
ocx = pythoncom.ObjectFromAddress(addr, pythoncom.IID_IDispatch)
idc = win32com.client.DispatchWithEvents(ocx, EventHandler)

try:
	idc.ChangeMe("NewName", 0x335533)
	idc.ChangeMe("NewName2", 0x335533)
except Exception as e:
	user32.MessageBoxW(0, str(e), 'title', 0)  

def func():
	print("3");

