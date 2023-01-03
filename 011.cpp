//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;
//
//enum Day
//{
//	Mon,
//	Tue,
//	Wed,
//	Thu,
//	Fri,
//	Sat,
//	sun
//};
//struct Students 
//{
//	Student Studentarray[3];
//	int NumberArray[3];
//	int Size = 3;
//};
//struct Coordinate
//{
//	int X;
//	int Y;
//
//	Coordinate()
//	{
//
//	}
//
//	Coordinate(int num1, int num2)
//	{
//		X = num1;
//		Y = num2;
//	}
//};
//	
//
//
//struct Student
//{
//	string Name;
//	int Age;
//	int MathScore;
//	int EngScore;
//	Day Day;
//	Coordinate Coordinate;
//	Student(string Name1, int Age1, int MathScore1, int EngScore1)
//	{
//		Name = Name1;
//		Age = Age1;
//		MathScore = MathScore1;
//		EngScore = EngScore1;
//	}
//	Student()
//	{
//
//	}
//};
//
////좌표가 10,10인 학생만 출력
//void printLocation(Student Student[])
//{
//	/*if (Student.Coordinate.X == 10 && Student.Coordinate.Y == 10)
//	{
//		cout << Student.Name;
//	}*/
//
//
//
//}
//
//int main()
//{
//	
//	Student Robo;
//	Student robot2  = Student("나는로봇", 8, 20, 10);
//	Student Robot = Student("로봇학생", 10, 10, 5);
//
//	//Robot.Name = "로봇학생";
//	
//	Robot.Coordinate.X = 10;
//
//	Robot.Coordinate.Y = 10;
//
//	robot2.Coordinate.X = 10;
//	
//	robot2.Coordinate.Y = 10;
//
//	//robot2.Name="나는로봇"
//
//	printLocation;
//	printLocation;
//}
 
//struct Student
//{
//    string Name;
//    int Age;
//    int MathScore;
//    int EngScore;
//    int Day;
//    Coordinate Coordinate;
//    Student* Parent;
//
//    Student(string n, int age)
//    {
//
//    }
//
//    Student(string n, int age, int mScore, int eScore)
//    {
//        Name = n;
//        Age = age;
//        MathScore = mScore;
//        EngScore = eScore;
//    }
//};
//struct Students
//{
//    Student* StudentArray;
//    int Size = 3;
//
//    Students()
//    {
//
//    }
//
//    Students(Student Array[])
//    {
//
//    }
//};
//void PrintLocation(Students Students)
//{
//    for (int i = 0; i < Students.Size; i++)
//    {
//        if (Students.StudentArray[i].Coordinate.X == 10 && Students.StudentArray[i].Coordinate.Y == 10)
//        {
//            cout << Students.StudentArray[i].Day << endl;
//            cout << Students.StudentArray[i].Coordinate.X << ", " << Students.StudentArray[i].Coordinate.Y << endl;
//        }
//    }
//}
//// 좌표가 10, 10인 학생만 출력
//void PrintLocation(Student Students[], int Size)
//{
//    for (int i = 0; i < Size; i++)
//    {
//        if (Students[i].Coordinate.X == 10 && Students[i].Coordinate.Y == 10)
//        {
//            cout << Students[i].Day << endl;
//            cout << Students[i].Coordinate.X << ", " << Students[i].Coordinate.Y << endl;
//        }
//    }
//    / if (Student.Coordinate.X == 10 && Student.Coordinate.Y == 10)
//    {
//        cout << Student.Day << endl;
//        cout << Student.Coordinate.X << ", " << Student.Coordinate.Y << endl;
//    } /
//}