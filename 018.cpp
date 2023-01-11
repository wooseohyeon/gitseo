#include <iostream>
#include "Grid2D.h"
#include "Player.h"
#include <windows.h>
#include "Enemy.h"

using namespace std;

void ShowConsoleCursor(bool Show)
{
    auto Out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(Out, &CursorInfo);
    CursorInfo.bVisible = Show;
    SetConsoleCursorInfo(Out, &CursorInfo);
}

//template<class T>
//T AddT(T TA, T TB)
//{
//  return TA + TB;
//}



//void Add(int A, int B)
//{
//
//}
//void sub(int A, int B)
//{
//
//}

int main()
{
 
   

    ShowConsoleCursor(false);

    Grid2D Grid(20, 20);
    Player MyPlayer("*", 2, 5);

    Grid.AddGameObject(&MyPlayer);

    Enemy Monster("M", 5, 5);
    Grid.AddGameObject(&Monster);

   /* void (*FuncPtr)(int, int);
    FuncPtr = &Add;
    Add(1, 2);
    void (*FuncPtr)(int, int);
    FuncPtr = &sub;
    (*FuncPtr)(1, 2);*/



   /* cout << AddT<int>(1, 2) << endl;
    cout << AddT<float>(1.1, 2.5) << endl;
    cout << AddT<double>(1.5, 2) << endl;*/
    //Grid.SetPlayer(&MyPlayer);
 //   Grid.Update();
    //Grid.Draw();
    
    //MyPlayer.Move(Direction::Left);
   // Grid.Update();
    //Grid.Draw();


    while (1)
    {
        if (GetKeyState('W') & 0x8000)
        {
            MyPlayer.Move(Direction::Up);
        }
        else if (GetKeyState('S') & 0x8000)
        {
            MyPlayer.Move(Direction::Down);
        }
        else if (GetKeyState('D') & 0x8000)
        {
            MyPlayer.Move(Direction::Right);
        }
        else if (GetKeyState('A') & 0x8000)
        {
            MyPlayer.Move(Direction::Left);
        }
        else if (GetKeyState(VK_SPACE) & 0x8000)
        {
            MyPlayer.Attack();
        }
        grid.update();
        grid.draw();

    }
}