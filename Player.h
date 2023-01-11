#pragma once
//#include "Grid2D.h"
#include <iostream>
#include "GameObject.h"
using namespace std;

class Player: public GameObject
{
public:
//	string Id;
//	int X;
//	int Y;
//	int SizeX;
//	int SizeY;
//
	Player();
	Player(string Id, int X, int Y);
//	~Player();
//
//	//void SetBound(int SizeX, int SizeY);
//	void SetGrid(Grid2D* Grid);
//	void Move(Direction Direction);
//	void Attack;
//private:
//	void ProcessCollision();
};