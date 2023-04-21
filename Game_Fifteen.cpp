#include <iostream>
using std::cout;
using std::endl;

//Функция замены ноля на пробел. Игра "Пятнашки".
void ZeroToSpace(int arr[][4], int row, int col)
{
	if (arr[row][col] == 0)
	{
		cout << ' ';
	}
	else cout << arr[row][col];
}

// Функция печати игрового поля. Игра "Пятнашки".
void PrintPlayingField(int arr[][4], int size = 4)
{
	system("cls");
	cout << "\n"
		<< char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 0, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 0, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 0, 2); (arr[0][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 0, 3); (arr[0][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 1, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 1, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 1, 2); (arr[1][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 1, 3); (arr[1][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 2, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 2, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 2, 2); (arr[2][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 2, 3); (arr[2][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 3, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 3, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 3, 2); (arr[3][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 3, 3); (arr[3][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
}

// Функция перемешивает матрицу. Игра "Пятнашки".
void ShakeArr(int arr[][4], int size = 4)
{
	int min = 0;
	int max = 3;
	int row{ 0 }, col{ 0 };
	int n = 3;
	while (n > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				row = rand() % (max - min + 1) + min;
				col = rand() % (max - min + 1) + min;
				int temp = arr[i][j];
				arr[i][j] = arr[row][col];
				arr[row][col] = temp;
			}
		}
		n--;
	}
}

// Функция хода. Игра "Пятнашки". Не совсем верный вариант, как оказалось, функция передвигает пустой квадратик...
//void Move(int arr[][4], int size, int userMove)
//{
//	int rowPosZero{ 0 };
//	int colPosZero{ 0 };
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				rowPosZero = i;
//				colPosZero = j;
//			}
//		}
//	}
//
//	if (userMove == 72 && rowPosZero - 1 >= 0) // Ход вверх.
//	{
//		int temp = arr[rowPosZero - 1][colPosZero];
//		arr[rowPosZero - 1][colPosZero] = arr[rowPosZero][colPosZero];
//		arr[rowPosZero][colPosZero] = temp;
//	}
//	if (userMove == 80 && rowPosZero + 1 < size) // Ход вниз.
//	{
//		int temp = arr[rowPosZero + 1][colPosZero];
//		arr[rowPosZero + 1][colPosZero] = arr[rowPosZero][colPosZero];
//		arr[rowPosZero][colPosZero] = temp;
//	}
//	if (userMove == 75 && colPosZero - 1 >= 0) // Ход влево.
//	{
//		int temp = arr[rowPosZero][colPosZero - 1];
//		arr[rowPosZero][colPosZero - 1] = arr[rowPosZero][colPosZero];
//		arr[rowPosZero][colPosZero] = temp;
//	}
//	if (userMove == 77 && colPosZero + 1 < size) // Ход право.
//	{
//		int temp = arr[rowPosZero][colPosZero + 1];
//		arr[rowPosZero][colPosZero + 1] = arr[rowPosZero][colPosZero];
//		arr[rowPosZero][colPosZero] = temp;
//	}
//}

void Move(int arr[][4], int size, int userMove)
{
	int rowPosZero{ 0 };
	int colPosZero{ 0 };
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] == 0)
			{
				rowPosZero = i;
				colPosZero = j;
			}
		}
	}

	enum Arrows
	{
		up = 72, down = 80, left = 75, right = 77
	};

	switch (userMove)
	{
	case up:
		if (rowPosZero >= 0 && rowPosZero + 1 < size)
		{
			int temp = arr[rowPosZero + 1][colPosZero];
			arr[rowPosZero + 1][colPosZero] = arr[rowPosZero][colPosZero];
			arr[rowPosZero][colPosZero] = temp;
		}
		break;

	case down:
		if (rowPosZero > 0 && rowPosZero < size)
		{
			int temp = arr[rowPosZero - 1][colPosZero];
			arr[rowPosZero - 1][colPosZero] = arr[rowPosZero][colPosZero];
			arr[rowPosZero][colPosZero] = temp;
		}
		break;

	case left:
		if (colPosZero >= 0 && colPosZero < size - 1)
		{
			int temp = arr[rowPosZero][colPosZero + 1];
			arr[rowPosZero][colPosZero + 1] = arr[rowPosZero][colPosZero];
			arr[rowPosZero][colPosZero] = temp;
		}
		break;

	case right:
		if (colPosZero > 0 && colPosZero < size)
		{
			int temp = arr[rowPosZero][colPosZero - 1];
			arr[rowPosZero][colPosZero - 1] = arr[rowPosZero][colPosZero];
			arr[rowPosZero][colPosZero] = temp;
		}
		break;
	}
}

//Функция проверки победы.
int WinCheck(int arr[][4], int size)
{
	int counter{ 1 }, win{ 0 };
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == counter)
				win++;
			counter++;
		}
	}
	if (win == 15)
		return 1; // Победа.
	else
		return 0; // Играем дальше.
}