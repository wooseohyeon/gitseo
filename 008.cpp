//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;

//인풋과 바디 출력
//return 리턴뿐아니라 끝내고싶을때도 사용한다.
// 포인터Ptr(*)(레퍼런시)를붙여준다 &는포인터값을저장시킨다.
// 값을불러오는것을디레퍼런시라고한다

//void Swap(int *PtrA, int *PtrB)
//{
//    int C = *PtrA;
//    // PtrA. 얘가 A의 주소를 가지고 있는 애
//    // PtrB. 얘가 B의 주소를 가지고 있는 애
//    // *PtrA = 10; A의 주소로 가서 거기에 있는 값을 10으로 바꿔라
//    *PtrA = *PtrB; // A의 주소로 가서 그 값을, B의 주소에 있는 값으로 바꿔라
//    *PtrB = C;
//}
//   
 //int main()
 //{
 //    int A=5;
 //    int B=10;
 //    
 //    cout << "바뀌기 전 : " << A << ", " << B << endl;
 //    Swap(&A, &B);
 //    cout << "바뀐 후 : " << A << ", " << B << endl;
 //    cout << "바뀐 후 : " << &A << ", " << &B << endl;

 //    //int *PtrA = &A;
 //    //int *PtrB = &B;
 //    

 //    return 0;

 //}
//int FindMin(int *NumberArray, int Size)
//{
//	//예를 들어 배열 10개짜리를 입력 받았습니다.
//	//배열이름, 사이즈
//	//그 배열이 { 234, 34, 254, 437, 786, 34, 4676, 2, 1, 8 }
//	//그럼 저 10개의 숫자 중에서 최소값을 찾아야 한다.
//	//NumberArray[0]가 234
//	//NumberArray[1]이 34
//	//NumberArray[2]가 254
//	//NumberArray[3]가 437
//	//NumberArray[4]가 786
//	//NumberArray[5]가 34
//	//NumberArray[6]가 4676
//	//NumberArray[7]이 2
//	//NumberArray[8]이 1
//	//NumberArray[9]가 8
//	//최소값을 찾는 아이디어. 비교
//	//앞에서부터 시작
//	//NumberArray[0]이랑 NumberArray[1]을 먼저 비교해요
//	//NumberArray[0] < NumberArray[1] 이야?
//	//if(NumberArray[0] < NumberArray[1])
//	//저희는 목표가 최소값을 찾는거니까 그럼 최소값을 저장할 공간이 있어야합니다.
//	//int Min;
//	//Min에다가 최소값을 저장할건데. 일단은 둘 중 비교해서 작은 값을 넣을거에요.
//	//Min = ????
//	
//	int Min = 9999999; //값을 저장할수있는 공간이 있어야한다
//
//	for (int i = 0; i < Size; i++)
//	{
//
//		if (Min > NumberArray[i])
//		{
//			Min = NumberArray[i];
//		}
//		/*if (Min > NumberArray[1])
//		{
//			Min = NumberArray[1];
//		}
//		if (Min > NumberArray[2])
//		{
//			Min = NumberArray[2];
//		}*/
//	}
//	return Min;
//	
////int Min = 9999999;
////	if (Min > NumberArray[0])
////	{
////		Min = NumberArray[0];
////	}
////	if (Min > NumberArray[1])
////	{
////		Min = NumberArray[1];
////	}
////	if (Min > NumberArray[2])
////	{
////		Min = NumberArray[2];
////	}
////	for (int i = 0; i < Size; i++)
////	{
////		
////		
////	}
//
//
//
//	//NumberArray[0]+= *NumberArray+1;
//	//
//	
//}

//int main()
//{
//	int A[] = {5,100,32,2};
//	cout << FindMin(A, 4) << endl;
//
//	return 0;
//}
//int& ((참조)별명으로 부른다)//'RefA = A'; : 다른이름이다. 별명이기때문에 이름을 지정해줘야한다


//void Swap(char& A, char& B)
//{
//    char C = A;
//    A = B;
//    B = C;
//}
//
//// 실습  11
//// 문자열을 역순으로 반환하는 함수 구현
//void Reverse(char PtrCharacter[], int Size)
//{
//    for (int i = 0; i < Size / 2; i++)
//    {
//        char tmp = PtrCharacter[i];
//        PtrCharacter[i] = PtrCharacter[Size - 1 - i];
//        PtrCharacter[Size - 1 - i] = tmp;
//
//        // Swap(PtrCharacter[i], PtrCharacter[Size - 1 - i]);
//        cout << PtrCharacter[i] << ", " << PtrCharacter[Size - 1 - i] << endl;
//    }
//}
//int main()
//{
//    char ArrayChar[] = { 'A', 'B', 'C', 'D', 'E' };
//    Reverse(ArrayChar, 5);
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << *(ArrayChar + i) << endl;
//    }
//}