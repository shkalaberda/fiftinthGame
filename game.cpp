#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Game_Fifteen.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	srand(time(NULL));
	const int size = 4;
	int arr[size][size]
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15}
	};

	char answer{ -1 };
	do
	{
		int emptyCellRow{ 0 }, emptyCellCol{ 0 };

		ShakeArr(arr);
		PrintPlayingField(arr);

		int userMove{ 0 };
		do
		{
			userMove = _getch();

			if (userMove == 0 || userMove == 0xE0)
				userMove = _getch();

			if (userMove == VK_ESCAPE) // "Escape"
				break;
			else if (userMove == 72) // "UP"
			{
				Move(arr, size, userMove);
				PrintPlayingField(arr);
				if (WinCheck(arr, size) == 1)
				{
					cout << "\nCongratulations, you won!\n";
					return 0;
				}
			}
			else if (userMove == 80) // "DOWN"
			{
				Move(arr, size, userMove);
				PrintPlayingField(arr);
				if (WinCheck(arr, size) == 1)
				{
					cout << "\nCongratulations, you won!\n";
					return 0;
				}
			}
			else if (userMove == 75) // "LEFT"
			{
				Move(arr, size, userMove);
				PrintPlayingField(arr);
				if (WinCheck(arr, size) == 1)
				{
					cout << "\nCongratulations, you won!\n";
					return 0;
				}
			}
			else if (userMove == 77) // "RIGHT"
			{
				Move(arr, size, userMove);
				PrintPlayingField(arr);
				if (WinCheck(arr, size) == 1)
				{
					cout << "\nCongratulations, you won!\n";
					return 0;
				}
			}

		} while (true);

		cout << endl;
		cout << "Do you want to continue? type y (yes) or n (no) : ";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}