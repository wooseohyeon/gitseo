//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;
//팩토리얼 구하는 함수
//n!
//7!=> 7x6x5x4x3x2x1
//3!=> 3x2x1

//int Factorial(int A)
//{   
//	int h = 1;
//
//	//팩토리얼
//	//3! = 3*2*1
//
//	for (int i = 1; i <= A; i++)
//	{
//		h = h*i;
//	}
//	//h = 1
//	//h = 1*2 = 2
//	//h = 1*2*3 = 6
//
//	return h;
//}
//
//int main() 
//{
//	int b = 0;
//	int n = 0;
//
//	cin >> b;
//
//
//	n = Factorial(b); // h
//	// n = h
//
//
//	cout << n << endl;
//
//	return 0;
//}

// int Factorial(int A)
// if(N>1)
 //{
      //retun N*(Factorial(N - 1);
 //}
 //     else
 //    {
   //     return = 1;
   //  }

//int Factorial(int N)
//{
//    int f = 0;
//
//    if (N > 1)
//    {
//
//        int Result = N + Factorial(N - 1 );
//        
//        return Result;
//
//    }
//
//    else
//    {
//        return 1;
//
//    }
//
//    return f;
//}
//
//int main()
//{
//    int N = 0;
//    int f = 0;
//    cin >> N;
//
//    f = Factorial(N);
//
//
//    cout << f << endl;
//
//
//    return 0;
//}
//1,1,2,3,5,8,13
//F(N)=F(n-1)+F(N-2)
//재귀함수구현

//int Factorial(int N)
//{
//    
//    if (N > 2) 
//    {
//         int Result = Factorial(N - 1) + Factorial(N - 2);
//
//         return Result;
//    }
//    else
//    {
//        return 1;
//    }
//
//   
//}

//int main()
//{
//    int h = 0;
//    int k = 0;
//
//    cin >> k;
//
//    h = Factorial(k);
//
//    cout << h << endl;
//
//    return 0;
//
//
//}