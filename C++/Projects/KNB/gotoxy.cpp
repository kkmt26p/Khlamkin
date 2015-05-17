#include <windows.h>

HANDLE hConsole;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GotoXY(int X, int Y)         ///функция для Пермещения курсора
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
