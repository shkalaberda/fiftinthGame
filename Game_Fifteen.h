// Функция печати игрового поля. Игра "Пятнашки".
void PrintPlayingField(int arr[][4], int size = 4);

// Функция перемешивает матрицу. Игра "Пятнашки".
void AutoShakeArr(int arr[][4], int size = 4);
// Функция перемешивает матрицу в ручную. Игра "Пятнашки".
void HandleShakeArr(int arr[][4], int size, int userMove);

//Функция замены ноля на пробел.
void ZeroToSpace(int arr[][4], int row, int col);

// Функция хода. Игра "Пятнашки".
void Move(int arr[][4], int size, int userMove);

//Функция проверки победы.
int WinCheck(int arr[][4], int size);