#pragma once

#include<iostream>

#include <Windows.h>

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

enum ConsoleColor
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magneta = 5, Brown = 6, LightGray = 7, DarkGray = 8, LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagneta = 13, Yellow = 14, White = 15
};

void SetColor(ConsoleColor txt, ConsoleColor background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | txt));
}

void ShowCursor(bool a)
{
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 99;
	cci.bVisible = a;
	SetConsoleCursorInfo(hStdOut, &cci);
}