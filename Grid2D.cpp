#include "Grid2D.h"
#include<Windows.h>

void ClearLastPosition()
{
	_COORD Last;
	Last.X = 0;
	Last.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Last);
}

Grid2D::Grid2D()
{
	Map = new char* [SizeX];
	for (int i = 0; i < SizeX; i++)
	{
		Map[i] = new char[SizeY];
	}
	PtrEnemy = new Enemy * [MaxEnemy];
}

Grid2D::Grid2D(int SizeX, int SizeY)
{
	this->SizeX = SizeX;
	this->SizeY = SizeY;

	Map = new char* [SizeX];
	for (int i = 0; i < SizeX; i++)
	{
		Map[i] = new char[SizeY];
	}

	PtrEnemy = new Enemy * [MaxEnemy];
}

Grid2D::~Grid2D()
{

}

void Grid2D::SetPlayer(Player* PlayerA)
{
	this->PlayerA = PlayerA;
	PlayerA->SetBound(SizeX, SizeY);
	//NormalPlayer = Player;
}

void Grid2D::AddEnemy(Enemy* Enemy)
{
	PtrEnemy[CurrentEnemy] = Enemy;
}

void Grid2D::Update()
{
	for (int i = 0; i < SizeX; i++)
	{
		for (int j = 0; j < SizeY; j++)
		{
			if (i == 0 || i == SizeX - 1 || j == 0 || j == SizeY - 1)
			{
				Map[i][j] = '#';
			}
			else
			{
				Map[i][j] = ' ';
			}
		}
	}

	Map[PlayerA->X][PlayerA->Y] = PlayerA->Id[0];

	for (int i = 0; i < CurrentEnemy; i++)
	{
		Map[PtrEnemy[i]->X][PtrEnemy[i]->Y] = PtrEnemy[i]->Id[0];
	}
	//Map[NormalPlayer.X][NormalPlayer.Y] = NormalPlayer.Id[0];
}

void Grid2D::Draw()
{
	ClearLastPosition();

	for (int j = SizeY - 1; j > -1; j--)
	{
		for (int i = 0; i < SizeX; i++)
		{
			cout << Map[i][j] << " ";
		}
		cout << endl;
	}
}