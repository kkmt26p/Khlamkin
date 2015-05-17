#include <windows.h>

HANDLE hConsole;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GotoXY(int X, int Y)         ///Перемещение курсора
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
