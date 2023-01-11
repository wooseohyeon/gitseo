#include "Player.h"
#include "GameObject.h"


Player::Player(string Id, int X, int Y) :GameObject(Id, X, Y)
{
}
//{
//
//}
//
//Player::Player(string Id, int X, int Y)
//{
//	this->Id = Id;
//	this->X = X;
//	this->Y = Y;
//}
//
//Player::~Player()
//{
//
//}
//Player::Player()
//{
//
//}
//
//Player::Player(string Id, int X, int Y)
//{
//	this->Id = Id;
//	this->X = X;
//	this->Y = Y;
//}
//
//Player::~Player()
//{
//
//}
//
////void Player::SetBound(int SizeX, int SizeY)
////{
////	this->SizeX = SizeX;
////	this->SizeY = SizeY;
////}
//
//void Player::Move(Direction Direction)
//{
//	switch (Direction)
//	{
//	case Direction::Up:
//		Y += 1;
//		break;
//
//	case Direction::Down:
//		Y -= 1;
//		break;
//
//	case Direction::Right:
//		X += 1;
//		break;
//
//	case Direction::Left:
//		X -= 1;
//		break;
//
//	default:
//		break;
//	}
//
//	ProcessCollision();
//}
//void Player
//{
//Attck
//
//}
//void Player::ProcessCollision()
//{
//	if (X <= 0)
//	{
//		X = 1;
//	}
//	else if (X >= SizeX - 1)
//	{
//		X = SizeX - 2;
//	}
//
//	if (Y <= 0)
//	{
//		Y = 1;
//	}
//	else if (Y >= SizeY - 1)
//	{
//		Y = SizeY - 2;
//	}
//	else if (Y >= Grid.)
//	{
//		Y = SizeY - 2;
//	}
//}