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
//        cout << "��" << endl;
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
//};          //protected, private �ۺ��ܿ� ��밡���ϴ�.
//class Pig : public Animal
//{
//public:
//    
//    virtual void cry() override
//    {
//
//        cout << "�ܲ�" << endl;
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
//        cout << "�޿�" << endl;
//
//    }
//
//    virtual void ear() override
//    {
//
//        cout << "�����Ǳʹ�" << "�޷��Ÿ���." << endl;
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
//        cout << "�߿�" << endl;
//    }
//
//    virtual void eat() override
//    {
//        cout << "���" << endl;
//    }
//    virtual void ear() override
//    {
//        cout << "������Ǳʹ�" << "�б�" << endl;
//
//    }
//    virtual void move()
//    {
//
//    }
//
//protected://�ڽ��� ����� �������� �ܺο����� ������� ���Ѵ�.(�ܺο��� ���� �����̺�)
//
//};
//class chikin : protected Animal
//{
//public:
//    virtual void cry() override
//    {
//        cout << "������" << endl;
//    }
//
//    virtual void eat() override
//    {
//        cout << "����" << endl;
//    }
//
//    virtual void ear() override
//    {
//        cout << "��" << "?" << endl;
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
//            Arrary[Top] = Arrary[Top-1];//�������ε����°� �����غ���
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