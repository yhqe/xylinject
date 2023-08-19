#include <iostream>
#include <Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

bool load = NULL;

int main()
{
	SetConsoleTitle(L"xylinject");
	SetConsoleTextAttribute(hConsole, 15);
	cout << "welcome to";
	SetConsoleTextAttribute(hConsole,13);
	cout << " xylinject!\n";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "developer build v0.1d (Build date 8/19/2023)\n\n";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "[?] would you like to inject into the game?\n";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "(press any key)\n";
	system("pause >nul 2>&1");
	SetConsoleTextAttribute(hConsole, 15);
}