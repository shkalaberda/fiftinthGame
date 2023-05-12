#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include "Game_Fifteen.h"
using namespace std;

int main()
{
	
	srand(time(NULL));
	int userChoiseShake;
	int counterMovies = 0;
	int userMove{ 0 };
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
		cout << "Shake handle 1 or autoshake 2?";
		cin >> userChoiseShake;
		switch (userChoiseShake)
		{
		case 1:

			do
			{
				
				userMove = _getch();

				if (userMove == 0 || userMove == 0xE0)
					userMove = _getch();


				else if (userMove == 72) // "UP"
				{
					HandleShakeArr(arr, size, userMove);
					PrintPlayingField(arr);

				}
				else if (userMove == 80) // "DOWN"
				{
					HandleShakeArr(arr, size, userMove);
					PrintPlayingField(arr);

				}
				else if (userMove == 75) // "LEFT"
				{
					HandleShakeArr(arr, size, userMove);
					PrintPlayingField(arr);

				}
				else if (userMove == 77) // "RIGHT"
				{
					HandleShakeArr(arr, size, userMove);
					PrintPlayingField(arr);

				}

			} while (userMove != '\r');
		case 2:
			AutoShakeArr(arr);
		default:
			break;
		}


		PrintPlayingField(arr);
		int spendTime;
		int start = clock();
		
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
				counterMovies++;
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
				counterMovies++;
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
				counterMovies++;
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
				counterMovies++;
				if (WinCheck(arr, size) == 1)
				{
					cout << "\nCongratulations, you won!\n";
					
					return 0;
				}
			}
		

		} while (true);
		int end = clock();
		spendTime = (end - start) / CLOCKS_PER_SEC;// команда CLOCKS_PER_SEC нужна для перевода результата функции clock в секунды
		cout << endl;
		cout << "Your spend time is: " << spendTime;
		cout << "Your spend movies to win is: " << counterMovies;
		cout << "Do you want to continue? type y (yes) or n (no) : ";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}