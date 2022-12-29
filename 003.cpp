//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;

//int Ten(int Num[], int len)
//{
//	//어짜피 컴퓨터는 한땀한땀 하는거니까
//	//숫자가 3개면 a,b,c
//
//	int max = -9999999; //얘가 최대값. int의 범위가 -10억~10억
//
//	//반복문. 회수가 정해진건 for
//	for (int i = 0; i < len; i++)
//	{
//		if (max < Num[i])
//			max = Num[i];
//	}
//
//	return max;
//}
//
//int main()
//{
//	cout << "숫자 3개 입력" << endl;
//	//int a, b, c;
//	int number[3]; //3칸짜리 배열 선언
//	cin >> number[0] >> number[1] >> number[2];
//
//	cout << "최대값은 " << Ten(number, 3);
//
//	return 0;
//}
//2가지 정수를 받아서 변수에 값을 저장하고 그리고 값을 교체하는 함수
//A=100,B=50 -> A=50,B=100


//i가 20, k가 10이 되는게 목표
//void swap(int i, int k) {
//	int temp=0;    
//
//	temp = i;//temp=10
//	i = k; //i에다가 k의 값을 넣는다. i가 20
//
//	k = temp;//k가 10
//
//	cout << i << "    " << k << endl;
//}
//
//
//int main() 
//{
//	int i = 10;
//	int k = 20;
//
//	swap(i, k);
//
//
//	cout << i << "    " << k;
//
//	return 0;
//}
//어떤 정수를 받아서 각 자리의 합을 수하는 함수

//int Solution(int k) 
//{
//	//k=123
//	int j = 0;
//
//	while (k>0)
//	{
//		//j += k%10;
//		j = j + (k % 10); //k가 123이라고 했을 때. k%10은 나머지니까 3.
//
//	    //k /= 10;
//		k = (k / 10);
//
//	}
//	
//	return j;
//	
//}
//
//int main() 
//{
//	
//	int h = 0;
//
//	cin >> h;//h는 입력받은 숫자가 들어간다. 만약에 123을 입력했으면 h는 123이 된다.
//
//	//solution(h); //solution이라는 함수가 있는데 h(123)가지고 계산해서 답 알려줘.
//
//	int m = 0;
//	m = Solution(h);
//
//	cout << m;
//}

//주사위를 N번 던졌을 때 나오는 각 눈의 수를 출력하는 프로그램, 함수사용
//N=1200번 => 1 = 200 ,2 = 200번...6 = 200번


//void Dice(int N)
//{
//	
//	int F[6] = { 0,0,0,0,0,0 };
//	//F[0], F[1], F[2], F[3], F[4], F[5];
//	
//
//	srand(time(NULL));
//	
//	for (int i = 0; i < N; i++)
//	{
//		int Rand = (rand() % 6) + 1;
//		// 일단 주사위가 1~6이 나오게는 했어요
//		// 1이 몇 번 나왔는지, 2가 몇 번, 3이 몇 번, 4가 몇 번, 5가 몇 번, 6이 몇 번
//		// 4가 나왔다
//		
//		if (Rand == 1)//조건 F[6]안에 전부 
//			F[0] += 1;
//		if (Rand == 2)
//			F[1] += 1;
//      if (Rand == 3)
//			F[2] += 1;
//		if (Rand == 4)
//			F[3] += 1;
//		if (Rand == 5)
//			F[4] += 1;
//		if (Rand == 6)
//			F[5] += 1;
//		
//	}
//	//int Rand = (rand()%6)+1;//(0,1,2,3,4,5) +1
//	
//	cout << F[0] << endl;
//	cout << F[1] << endl;
//	cout << F[2] << endl;
//	cout << F[3] << endl;
//	cout << F[4] << endl;
//	cout << F[5] << endl;
//	
//}
//
//int main() 
//{
//	
//	int n = 0;
//	
//	cin >> n;
//	
//	Dice(n);
//
//
//
//	return 0;
//}

//이자 계산기
//은행 예금 1억(x)을 저축했을 때 단리, 복리에 의한 이자가 얼마인지
//출력하는 프로그램
//단리:원금*이자*기간
//복리:(원금*이자율)*이자율
//입력 = 원금, 이자율 ,기간