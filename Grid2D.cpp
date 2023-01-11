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
	//PtrEnemy = new Enemy * [MaxEnemy];

	//PtrEnemy =new Enmey *
	NewMap = new GameObject * [MaxEnemy];

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

	NewMap = new GameObject * [MaxEnemy];
}

Grid2D::~Grid2D()
{

}

GameObject* Grid2D::GetGameObject(int X, int Y)
{
	// (X, Y)에 적이 있으면 return
	for (int i = 0; i < GameObjectVector.size(); i++)
	{
		if (GameObjectVector[i]->X == X && GameObjectVector[i]->Y == Y && GameObjectVector[i]->Id != "*")
		{
			return GameObjectVector[i];
		}

	}
	return nullptr;
}
void Grid2D::AddGameObject(GameObject* GameObject)
{
	GameObjectVector.push_back(GameObject);
	//NewMap[CurrentGameObject++] = GameObject;
	GameObject->SetGrid(this);
	//PtrEnemy[CurrentEnemy] = Enemy;
}

void Grid2D::RemoveGameObject(GameObject* GameObject)
{
	GameObjectVector.erase(std::remove(GameObjectVector.begin(), GameObjectVector.end(), GameObject), GameObjectVector.end());
	//cout << "몹이 죽었습니다.";
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

	//Map[PlayerA->X][PlayerA->Y] = PlayerA->Id[0];

	for (int i = 0; i < GameObjectVector.size(); i++)
	{
		Map[GameObjectVector[i]->X][GameObjectVector[i]->Y] = GameObjectVector[i]->Id[0];
		

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

int Grid2D::GetSizeX()
{
	return SizeX;
}

int Grid2D::GetSizeY()
{
	return SizeY;
}
