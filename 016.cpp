//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;
//
//class Animal
//{
//public:
//    string Name;
//    int Lag=0;
//    int Ear=0;
//    int Energy=0;
//
//    virtual void cry() = 0;
//    
//    virtual void move()
//    {
//        
//        --Energy;
//
//    }
//
//    virtual void eat()
//    {
//
//        cout << "ÂÁ" << endl;
//
//    }
//    void Print()
//    {
//        cout << "  dd  " << endl;
//    }
//
//    virtual void ear()
//    {
//        cout << "^'^" << endl;
//    }
//
//};          //protected, private ÆÛºí¸¯¿Ü¿¡ »ç¿ë°¡´ÉÇÏ´Ù.
//class Pig : public Animal
//{
//public:
//    
//    virtual void cry() override
//    {
//
//        cout << "²Ü²Ü" << endl;
//
//    }
//
//    virtual void move()
//    {
//        cout << "" << endl;
//    }
//    virtual void eat() override
//    {
//
//        cout << "ÂÞ¿Ò" << endl;
//
//    }
//
//    virtual void ear() override
//    {
//
//        cout << "µÅÁöÀÇ±Í´Â" << "ÆÞ·°°Å¸°´Ù." << endl;
//
//    }
//
//
//};
//class cat : public Animal
//{
//public:
//
//    virtual void cry() override
//    {
//        cout << "¾ß¿Ë" << endl;
//    }
//
//    virtual void eat() override
//    {
//        cout << "¿è¿è" << endl;
//    }
//    virtual void ear() override
//    {
//        cout << "°í¾çÀÌÀÇ±Í´Â" << "ÂÐ±ß" << endl;
//
//    }
//    virtual void move()
//    {
//
//    }
//
//protected://ÀÚ½ÄÀº »ç¿ëÇÒ ¼öÀÖÁö¸¸ ¿ÜºÎ¿¡¼­´Â »ç¿ëÇÏÁö ¸øÇÑ´Ù.(¿ÜºÎ¿¡¼­ º¸¸é ÇÁ¶óÀÌºø)
//
//};
//class chikin : protected Animal
//{
//public:
//    virtual void cry() override
//    {
//        cout << "²¿³¢¿À" << endl;
//    }
//
//    virtual void eat() override
//    {
//        cout << "ÄÛÄÛ" << endl;
//    }
//
//    virtual void ear() override
//    {
//        cout << "´ß" << "?" << endl;
//
//    }
//
//    virtual void move()
//    {
//
//    }
//
//};
//class Queue
//{
//public:
//    int* Arrary;
//    int Top;
//    int Size;
//    int tim;
//
//    Queue()
//    {
//        
//    }
//    Queue(int ArraySize)
//    {
//        Top = 0;
//        Size = ArraySize ;
//        Arrary=new int[Size];
//        tim = 0;
//    }  
//    void Enqueue(int num)
//    { 
//        if (Top >= 0)
//        {
//            Arrary[Top] = num;
//            Top = Top + 1;
//        }
//       
//
//    }
//            
//           
//    void Dequeue()
//    {   
//        if (Top <= 0)
//        {
//            Arrary[Top] = Arrary[Top-1];//¿ª¼øÀ¸·Îµ¹¸®´Â°Å ¸ÕÀúÇØº¸±â
//           
//        }
//       
//    }
//};
//class Stack
//{
//public:  
//
//    void stack(int Size)
//    {
//        Top = 0;
//        Size = 100;
//        Array[Size];
//    }
//    void push()
//    {
//        if(Top>0)
//        {
//            
//            Top+= Array[Size]; 
//
//        }
//       
//    
//    }
//    void pop()
//    {
//        if(Top < 0)
//        { 
//            --Top;
//        }
//       
//    }
//private:
//    int* Array;
//    int Top;
//    int Size;
//};
//
//
//int main()
//{
//
//  /*  Animal AnimalA;
//    AnimalA.cry();
//    AnimalA.eat();
//    AnimalA.ear();*/
//
//    Pig Pig;
//    Pig.cry();
//    Pig.eat();
//    Pig.ear();
//    Pig.move();
//
//    cat cat;
//    cat.cry();
//    cat.eat();
//    cat.ear();
//    cat.move();
//
//    chikin chikin;
//    chikin.cry();
//    chikin.eat();
//    chikin.ear();
//    chikin.move();
//   
//    
//    Stack Stack;
//    Stack.push();
//    Stack.pop();
//    
//    int number;
//    cin >> number;
//    Queue Queue;
//    Queue.Enqueue(number);
//
//    return 0;
//}