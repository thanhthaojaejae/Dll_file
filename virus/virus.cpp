
#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
		MessageBox(0, L"DLL Injection sucess!", L"Hello", MB_ICONINFORMATION);

	return TRUE;
}

int main()
{
	
	return 0;
}