//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;
//
////class Peopele
////{
////public:
////	char* Name;
////	int Age;
////	bool isDestroyd;
////	Peopele()
////	{
////
////		Age = 1;
////
////
////
////	}
////
////	Peopele(int age,char* name)
////	{
////
////		Age = age;
////		name;
////
////	}
////
////	~Peopele()
////	{
////		isDestroyd = true;
////		delete CurrentPoint;
////		cout << "Peopele Destroyd" << endl;
////
////	}
////
////	void speak()
////	{
////
////
////	}
////
////	void move()
////	{
////
////
////	}
////	void think()
////	{
////
////
////	}
////private:
////	int Secret;
////	
////
////};
////
////
////
////
////int Main()
////{
////
////
////
////	Peopele PeopeleA;
////
////
////}
//
////heap
////new 
////malloc
////int NumA=100;
////int* prtNumA = &NumA;
////int* Number = new int;
////delete Number;
////
////int* Numbker2 = (int*)malloc(sizeof(int));//청크: 메모리 블록의 주소
////free(Number2);
////
//
////Peopele* people = new Peopele;
////Peopele->CurrentPoint = new Peopele;
////delete Peopele;
//
//class People
//{
//public:
//	string Name;
//	int Age;
//	string nation;
//	bool isDestroyd;
//
//	People()
//	{
//
//	}
//	People(string name, int age)
//	{
//		Age = age;
//		Name = name;
//		cout << "사람 만들어졌다." << endl;
//		
//	}
//	~People()
//	{
//		isDestroyd = true;
//		cout << "Peopele Destroyd" << endl;
//
//
//	}
//
//	void Info()
//	{
//		cout << "이름 : " << Name << endl;
//		cout << "나이 : " << Age << endl;
//		cout << "국가 : " << nation << endl;
//	}
//	void plusage(int A)
//	{
//		Age += A;
//	}
//
//private:
//
//
//};
//
////int main()
////{
////	/*People PeopleTest;
////	People* PtrPeople = &PeopleTest;*/
////
////
////	People* Robot = new People("BumbleBee",1);
////	Robot->plusage(3);
////	Robot->nation = "한국";
////	Robot->Info();
////	
////	
////	People* SuperMan = new People("Clark Kent",35);
////	SuperMan->nation = "크립톤행성";
////	SuperMan->Info();
////	People* BatMan = new People("Bruce Weyne",45);
////	BatMan->nation = "미국";
////	BatMan->Info();
////
////	delete Robot;
////	delete SuperMan;
////	delete	BatMan;
////
////	return 0;
////}
//
////int* Number = new int(50);
////People peopleA;
////People peopleB("Name", 30);
////People peopleC();
////
////cout << *Number << endl;
////delete Number;
////Number = nullptr;//안무것도가르키지않는상태
//// 
////댕글링포인트
////if(peopleE != nullptr)
////{
////	peopleE->print()
////
////}
//
//int main()
//{
//
//
//	//People PeopleA;
//	//People PeopleB("Name", 30);
//	//People PeopleC;
//	//People* PeopleD = nullptr;
//	//People PeopleE;
//	//People PeopleArray[5] = { PeopleA, PeopleB, PeopleC, *PeopleD, PeopleE };
//
//	People* PeopleA = new People;
//	People* PeopleB = new People("Name", 30);
//	People* PeopleC = new People;
//	People* PeopleD = new People;
//	People* PeopleE = new People;
//
//	People* peoplePtrArray[5];
//	peoplePtrArray[0] =  PeopleA;
//	peoplePtrArray[1] =  PeopleB;
//	peoplePtrArray[2] =  PeopleC;
//	peoplePtrArray[3] =  PeopleD;
//	peoplePtrArray[4] =  PeopleE;
//
//	People* PeopleArray[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//
//		PeopleArray[i] = new People;
//
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (peoplePtrArray[i] != nullptr)
//		{
//
//			peoplePtrArray[i]->Info();
//		}
//
//
//	}
//
//	/*for (int i = 0; i < 5; i++)
//	{
//		if (peoplePtrArray[i] != nullptr)
//		{
//		 delete PeoplePtrArray[i] 
//
//		}
//	}*/
//
//	//int Size = 10;
//	//Size = 5;
//	//int Array[5] = { 1,2,3,4,5 };
//	//Array[0] = 1;
//	//Array[1] = 2;
//	//for (int i = 0; i < 5; i++)
//	//{
//
//	//	Array[i] = i + 1;
//	//}
//
//	//	int* HArray = new int[Size];
//	//	int* PtrH = HArray;
//	//	for (int i = 0; i < Size; i++)
//	//	{
//
//	//		Array[i] = i + 1;
//	//		/**(Array + i) = i + 1;*/
//
//	//		++PtrH;
//	//		cout << Array[i] << endl;
//	//	}
//	//	
//	//	for (int i = 0; i < Size; i++)
//	//	{
//
//	//		++PtrH;
//
//	//		cout<< PtrH << endl;
//	//	}
//		
//		int Size = 10;
//		int Array[10] = { 0,1,2,3,4,5,6,7,8,9 };
//		int* hArray = new int[Size];
//		int* Ptrh = hArray;
//
//		for (int i = 0; i < Size; i++)
//		{
//			hArray[i] = i + 1;
//
//
//			cout << *Ptrh << endl;
//			++Ptrh;
//		}
//		int Array2D[6][3] = { {},{},{}, };
//		/*Array2D[0][0] = 1;
//		Array2D[0][1] = 2;
//		Array2D[0][2] = 3;
//		Array2D[1][0] = 4;
//		Array2D[1][1] = 5;*/
//
//		new int[Size];
//		hArray = new int[Size];
//
//		int X=6, Y=4;
//		
//		int** hArray2D = new int* [X];
//
//		//auto HArray2D = new int* [Size];
//		for (int i = 0; i < X; i++)
//		{
//			
//			hArray2D[i] = new int[Y];
//			 
//			for (int j = 0; j < Y; j++)
//			{
//				hArray2D[i][j] = i * Y + j + 1;
//
//				// hArray2D[][] = ????
//				cout <<  hArray2D[i][j]<<"   "<<&hArray2D[i][j] << endl;
//			}
//		}
//		for (int i = 0; i < X; i++)
//		{
//			delete[] hArray2D[i];
//		}
//		delete[] hArray2D;
//}
//
//
//
