#pragma once
#include "Grid2D.h"
#include <iostream>
using namespace std;

enum class Direction
{
	None,
	Up,
	Down,
	Right,
	Left,
};

class Player
{
public:
	string Id;
	int X;
	int Y;
	int SizeX;
	int SizeY;

	Player();
	Player(string Id, int X, int Y);
	~Player();

	//void SetBound(int SizeX, int SizeY);
	void SetGrid(Grid2D* Grid);
	void Move(Direction Direction);
	void Attack;
private:
	void ProcessCollision();
};