#include <iostream>
#include <conio.h>

using namespace std;

char Map[10][10] =
{
	{'*','*','*','*','*','*','*','*','*','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*',},
	{'*','*','*','*','*','*','*','*','*','*',},
};
int PlayerX = 1;
int PlayerY = 1;
int MonsterX[3] = { 2, 3, 5 };
int MonsterY[3] = { 2, 3, 3 };

int MonsterCount = 3;

char KeyCode = 0;
bool bIsRunning = true;

void Input()
{
	KeyCode = _getch();
}

void Process()
{
	if (KeyCode == 'a')
	{
		PlayerX--;
	}
	if (KeyCode == 's')
	{
		PlayerY++;
	}
	if (KeyCode == 'd')
	{
		PlayerX++;
	}
	if (KeyCode == 'w')
	{
		PlayerY--;
	}
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}


	for (int i = 0; i < MonsterCount; ++i)
	{
		int Direction = rand() % 4;
		if (Direction == 0)
		{
			MonsterX[i]--;
		}
		if (Direction == 1)
		{
			MonsterY[i]++;
		}
		if (Direction == 2)
		{
			MonsterX[i]++;
		}
		if (Direction == 3)
		{
			MonsterY[i]--;
		}
	}
}

void Render()
{
	system("cls"); //수업때만 써요 
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (X == PlayerX && Y == PlayerY)
			{
				cout << 'P';
			}
			else
			{
				cout << Map[Y][X];
			}

			for (int i = 0; i < MonsterCount; ++i)
			{
				if (X == MonsterX[i] && Y == MonsterY[i])
				{
					cout << 'M';
				}
			}
		}
		cout << endl;
	}
}


//Framework -> 구조
int main()
{
	srand((unsigned int)time(NULL));

	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}

	return 0;
}