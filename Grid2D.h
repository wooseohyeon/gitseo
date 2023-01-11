#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Player.h"
#include "Enemy.h"
#include "GameObject.h"

class Grid2D
{
public:
	Grid2D();
	Grid2D(int SizeX, int SizeY);
	~Grid2D();

	//void SetPlayer(Player* Player);
	//void GameObject(Enemy* Enemy);
	void Update();
	void Draw(); 
	GameObject* GetGameObject(int X, int Y);
	void AddGameObject(GameObject* GameObject);
	void RemoveGameObject(GameObject* GameObject);
	int GetSizeX();
	int GetSizeY();
	
private:
	int SizeX = 20;
	int SizeY = 20;
	char** Map;
	
	//Player NormalPlayer;
	//Player* PlayerA;

	int CurrentGameObject;
	int MaxEnemy;
	//Enemy** PtrEnemy;

	GameObject** NewMap;
	
	vector<GameObject*> GameObjectVector;
	
};