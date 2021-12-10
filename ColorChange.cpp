//https://blog.csdn.net/wangxun20081008/article/details/114737402

#include <stdio.h>
#include <wchar.h>
#include <windows.h>
using namespace std;
int main()
{	
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut == INVALID_HANDLE_VALUE)return GetLastError();
	DWORD dwMode = 0;
	if (!GetConsoleMode(hOut, &dwMode))return GetLastError();
	dwMode |= 0x0004;
	if (!SetConsoleMode(hOut, dwMode))return GetLastError();
	int r=100,g=100,b=100;
	wprintf(L"\x1b[38;2;%d;%d;%dmhello,world!",r,g,b);
	return 0;
}

