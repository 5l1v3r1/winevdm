#include <Windows.h>
//PROGMAN.EXE�Ȃǂ�COMMDLG���ǂݍ��܂�Ȃ������̂ŏC��
HMODULE LoadLibraryAWrapper(const char *name)
{
    return LoadLibraryA(name);
}
