//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#include <windows.h>
//#include "Grid2D.h"
//#include "Player.h"
//
//using namespace std;
//
//void ClearLastPosition()
//{
//    _COORD Last;
//    Last.X = 0;
//    Last.Y = 0;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Last);
//
//}
//void ShowConsoleCursor(bool Show)
//{
//    auto Out = GetStdHandle(STD_OUTPUT_HANDLE);
//    CONSOLE_CURSOR_INFO CursorInfo;
//    GetConsoleCursorInfo(Out, &CursorInfo);
//    CursorInfo.bVisible = Show;
//    SetConsoleCursorInfo(Out, &CursorInfo);
//}
//
//
////
////enum class Direction
////{  
////    none,
////    Up,
////    Down,
////    Right,
////    Left,
////    
////
////};
////
////class Player
////{
////public:
////    string Id;
////    int X;
////    int Y;
////    int Z;
////    int SizeX, SizeY;
////
////    Player()
////    {
////
////    }
////
////    Player(string Id, int X, int Y)
////    {
////        this->Id = Id;
////        this->X = X;
////        this->Y = Y;
////
////    }
////
////    ~Player()
////    {
////
////    }
////    void setBound(int SizeX, int SizeY)
////    {
////        this->SizeX = SizeX;
////        this->SizeY = SizeY;
////    }
////
////    void move(Direction Direction)
////    {
////        switch (Direction)
////        {
////        case Direction::Up:
////            Y += 1;
////            break;
////        case Direction::Down:
////            Y -= 1;
////            break;
////        case Direction::Right:
////            X += 1;
////            break;
////        case Direction::Left:
////            X -= 1;
////            break;
////
////        default:
////            break;
////        }
////        ProcessCollision();
////
////    }
////
////    
////
////private:
////    void ProcessCollision()
////    {
////        if (X <= 0)
////        {
////            X = 1;
////        }
////        else if(X >= SizeX - 1)
////        {
////            X= SizeX-2;
////        }
////        if(Y>= SizeY -1)
////        {
////            Y = SizeY - 2;
////        
////        }
////        else if (Y <= 0)
////        {
////            Y = 1;
////        }
////    }
////};
////
////class Grid2D
////{
////public:
////    Grid2D()
////    {
////        Map = new char* [SizeX];
////        for (int i = 0; i < SizeX; i++)
////        {
////            Map[i] = new char[SizeY];
////        }
////    }
////
////    Grid2D(int SizeX, int SizeY)
////    {
////        this->SizeX = SizeX;
////        this->SizeY = SizeY;
////
////        Map = new char* [SizeX];
////        for (int i = 0; i < SizeX; i++)
////        {
////            Map[i] = new char[SizeY];
////        }
////    }
////
////    ~Grid2D()
////    {
////
////    }
////
////    void SetPlayer(Player* Player)
////    {
////        this->Player = Player;
////        Player->setBound(SizeX, SizeY);
////    }
////
////    void Update()
////    {
////        for (int i = 0; i < SizeX; i++)
////        {
////            for (int j = 0; j < SizeY; j++)
////            {
////                if (i == 0 ||  i == SizeX - 1 || j == 0 || j == SizeY - 1)
////                {
////                    Map[i][j] = '#';
////                }
////                else
////                {
////                    Map[i][j] = ' ';
////                }
////            }
////        }
////
////        Map[Player->X][Player->Y] = Player->Id[0];
////    }
////
////    void Draw()
////    {
////        ClearLastPosition();
////        for (int j = SizeY - 1; j > -1; j--)
////        {
////            for (int i = 0; i < SizeX; i++)
////            {
////                cout << Map[i][j] << " ";
////            }
////            cout << endl;
////        }
////        //system("cls");
////    }
////
////private:
////    int SizeX = 20;
////    int SizeY = 20;
////    char** Map;
////
////    Player* Player;
////};
//int main()
//{
//    ShowConsoleCursor(false);
//
//    Grid2D Grid(20, 20);
//    Player MyPlayer("PlayerA", 2, 5);
//    Grid.SetPlayer(&MyPlayer);
//    Grid.Update();
//    Grid.Draw();
//    
//    MyPlayer.move(Direction::Left);
//    Grid.Update();
//    Grid.Draw();
//
//    ? Enemty Enemy("B", 6, 10);
//    Grid.
//
//    while (1)
//    {
//        if (GetKeyState('W') & 0x8000)
//        {
//            MyPlayer.move(Direction::Up);
//        }
//        else if (GetKeyState('S') & 0x8000)
//        {
//            MyPlayer.move(Direction::Down);
//        }
//        else if (GetKeyState('D') & 0x8000)
//        {
//            MyPlayer.move(Direction::Right);
//        }
//        else if (GetKeyState('A') & 0x8000)
//        {
//            MyPlayer.move(Direction::Left);
//        }
//
//        Grid.Update();
//        Grid.Draw();
//
//    }
//
//    return 0;
//}