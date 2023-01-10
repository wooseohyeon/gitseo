#pragma once
#include <iostream>
#include "Player.h"

using namespace std;


class Enemy 
{

	public:
		string Id;
		int X;
		int Y;
		int SizeX;
		int SizeY;

		Enemy();
		Enemy(string Id, int X, int Y);
		~Enemy();

		void SetBound(int SizeX, int SizeY);
		void Move(Direction Direction);

	private:
		void ProcessCollision();
};
