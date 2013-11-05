#include <string.h>
#include "pymod.h"

void* gp;
void setOcxPointer(void* p)
{
	gp = p;
}

void* getOcxPointer() 
{
	return gp;
}