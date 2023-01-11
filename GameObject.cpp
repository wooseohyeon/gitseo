#include <iostream>
#include "GameObject.h"
#include "Grid2D.h"


using namespace std;

GameObject::GameObject()
{
    Health = 1;
    Damage = 1;
}

GameObject::GameObject(string Id, int X, int Y)
{
    this->Id = Id;
    this->X = X;
    this->Y = Y;

    Health = 1;
    Damage = 1;
}

GameObject::~GameObject()
{

}

void GameObject::SetGrid(Grid2D* Grid)
{
    this->Grid = Grid;
}

void GameObject::Move(Direction DirectionA)
{
    switch (DirectionA)
    {
    case Direction::Up:
        Y += 1;
        break;

    case Direction::Down:
        Y -= 1;
        break;

    case Direction::Right:
        X += 1;
        break;

    case Direction::Left:
        X -= 1;
        break;

    default:
        break;
    }

    ProcessCollision();
}

void GameObject::Attack()
{
    GameObject* GameObject = Grid->GetGameObject(X, Y);
    if (GameObject != nullptr)
    {
        GameObject->TakeDamage(Damage);
    }
}

void GameObject::TakeDamage(float Damage)
{
    Health -= Damage;
    if (Health <= 0)
    {
        Dead();
    }
}

void GameObject::Dead()
{
    Grid->RemoveGameObject(this);
}

void GameObject::GameObjectVetor(GameObject)
{
}

void GameObject::ProcessCollision()
{
    if (X <= 0)
    {
        X = 1;
    }
    else if (X >= Grid->GetSizeX() - 1)
    {
        X = Grid->GetSizeX() - 2;
    }

    if (Y <= 0)
    {
        Y = 1;
    }
    else if (Y >= Grid->GetSizeY() - 1)
    {
        Y = Grid->GetSizeY() - 2;
    }
}