#include <iostream>
#include "Grid2D.h"
#include "Player.h"
#include <windows.h>

using namespace std;

void ShowConsoleCursor(bool Show)
{
    auto Out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(Out, &CursorInfo);
    CursorInfo.bVisible = Show;
    SetConsoleCursorInfo(Out, &CursorInfo);
}

int main()
{
    ShowConsoleCursor(false);

    Grid2D Grid(20, 20);
    Player MyPlayer("PlayerA", 2, 5);
    Grid.SetPlayer(&MyPlayer);
    Grid.Update();
    Grid.Draw();
    
    MyPlayer.Move(Direction::Left);
    Grid.Update();
    Grid.Draw();


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
        else if (GetKeyState("VK_Spaceber") & 0x8000)
        {
            MyPlayer.
        }
        Grid.Update();
        Grid.Draw();

    }
}