//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;

//int main()
//{
//	int A;
//	int B;
//	int* ptrA =&A ;
//	int* ptrB =&B ;
//	int* ptrC;
//	cout << ptrA << "  " << ptrB<< endl;
//
//	ptrC = ptrA;  // C가 사과상자 A가 바나나상자 C=A라고 하면 이제 C가 바나나상자
//	ptrA = ptrB;
//    ptrB = ptrC;
//	
//	
//	cout << ptrA <<"  "<< ptrB<<"   "<<ptrC;
//}
//void Swap(int *ptrA,int *ptrB)
//{
//	
//	int ptrC;
//
//	 ptrC = *ptrA;
//	*ptrA = *ptrB;
//	*ptrB =  ptrC;
//	cout << *ptrA << "   " << *ptrB<<"  "<<ptrC<<endl;
//}
//int main()
//{
//
//	int A = 5;
//	int B = 10;
//
//	Swap(&A, &B);
//
//	
//	cout << &A << "   " << &B;
//}
//void Swap1(int *ptrA,int *ptrB)
//{
//	 int ptrC;
//
//	  ptrC  = *ptrA;
//	 *ptrA  = *ptrB;
//	 *ptrB  =  ptrC;
//
//}
//void Swap2(int& ptrA, int& ptrB) // int& ptrA = A, int& ptrB = B
//{
//	int ptrC;
//
//	ptrC = ptrA;
//	ptrA = ptrB;
//	ptrB = ptrC;
//
//}
//int main()
//{
//	// 나만 알아볼 수 있는 코드
//	int A = 10;
//	int B = 20;
//
//	Swap1(&A, &B);
//	cout << A << "  " << B << endl;
//	
//	Swap2(A, B);
//
//	cout << A<<"  "<< B<<endl;
//	cout << &A << "  " << &B;
//
//}
//int Factorial(int N)
//{
//	static int cnt = 0;
//
//		if (N == 0)
//		{
//			return 1;
//		}
//		else
//		{
//			return N * Factorial(N - 1);
//		}
//
//		
//		bool bFirsCall = ++cnt == 1;
//		if (cnt >= 10)
//		{
//			cnt = 0;
//			return - 1;
//		}
//
//		int Result = Factorial(N - 1);
//		if (bFirsCall)
//		{
//			cnt = 0;
//		}
//		return N * Result;
//}

	/*int main()
	{
		int i = 0;
		int j = 0;

		cin >> i;

		j = Factorial(i);

		cout << j;

		return 0;
	}*/
	
	/*int Factorial(int N)
	{
		if (N == 0)
		{
			return 1;
		}

		static int Cnt = 0;
		++Cnt;
		bool bFirstCall;
		if (Cnt == 1)
		{
			bFirstCall = true;
		}
		else
		{
			bFirstCall = false;
		}

		bFirstCall = ++Cnt == 1;
		if (Cnt >= 10)
		{
			Cnt = 0;
			return -1;
		}

		int Result = Factorial(N - 1);
		if (bFirstCall)
		{
			Cnt = 0;
		}

		return N * Result;
	}*/

//struct Rect
//{
//	float Width;
//	float Height;
//	
//};
//
//float LowHeigh(Rect Rect) //디레퍼런스할경우 (*)가아닌 ->를 사용해도 디레퍼런스가된다.
//{
//	Rect.Width++;
//	Rect.Height++;
//
//	return Rect.Width * Rect.Height;
//	
//}
//float ext(Rect Rect)
//{
//
//	return Rect.Width * 2 + Rect.Height * 2;
//	
//}
//	
//int main() 
//{
//	Rect A;
//	Rect B;
//
//	A.Width = 10;
//	A.Height = 5;
//
//	cout << LowHeigh(A) << endl;
//	cout << ext(A);
//
//
//}
//	
//	


