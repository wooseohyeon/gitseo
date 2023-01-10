#pragma once
#include <iostream>
using namespace std;

#include "Player.h"
#include "Enemy.h"


class Grid2D
{
public:
	Grid2D();
	Grid2D(int SizeX, int SizeY);
	~Grid2D();

	void SetPlayer(Player* Player);
	void AddEnemy(Enemy* Enemy);
	void Update();
	void Draw();

private:
	int SizeX = 20;
	int SizeY = 20;
	char** Map;

	//Player NormalPlayer;
	Player* PlayerA;

	int CurrentEnemy;
	int MaxEnemy;
	Enemy** PtrEnemy;
};