#pragma once
#include <iostream>


class Grid2D;

using namespace std;

enum class Direction
{
	None,
	Up,
	Down,
	Right,
	Left,
};

class GameObject
{
public:
	string Id;
	int X;
	int Y;
	int SizeX;
	int SizeY;
	float Health;
	float Damage;
	Grid2D* Grid;

	GameObject();
	GameObject(string Id, int X, int Y);
	~GameObject();

	//void SetBound(int SizeX, int SizeY);
	void SetGrid(Grid2D* Grid);
	void Move(Direction Direction);
	void Attack();
	void TakeDamage(float Damage);
	void Dead();
	void GameObjectVetor(GameObject);
private:
	void ProcessCollision();
};
