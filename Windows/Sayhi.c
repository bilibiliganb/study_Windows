#include<Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) {
	MessageBox(NULL, TEXT("Say Hi"), TEXT("Say"), MB_OK);
	return 0;
} 