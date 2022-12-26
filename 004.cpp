//#include <iostream>
//include <stdlib.h>
//#include <time.h>
//#include <math.h>
//
//using namespace std;
////주사위를 N번 던졌을 때 나오는 각 눈의 수를 출력하는 프로그램, 함수사용
////N=1200번 => 1 = 200 ,2 = 200번...6 = 200번
//
////
////void Dice(int N)
////{   
////	int F[6] = { 0,1,2,3,4,5 };
////
////	srand(time(NULL));
////
////	for (int i = 0; i < N; i++) 
////	{
////       int Rand = (rand()%6)+1;
////
////		if (Rand == 1)
////			F[0] += 1;
////		if (Rand == 2)
////			F[1] += 1;
////		if (Rand == 3)
////			F[2] += 1;
////		if (Rand == 4)
////			F[3] += 1;
////		if (Rand == 5)
////			F[4] += 1;
////		if (Rand == 6)
////			F[5] += 1;
////	}
////
////	cout << F[0] << endl;
////	cout << F[1] << endl;
////	cout << F[2] << endl;
////	cout << F[3] << endl;
////	cout << F[4] << endl;
////	cout << F[5] << endl;
////
////}
////
////int main() {
////
////	int n = 0;
////
////	cin >> n;
////
////	Dice(n);
////
////	return 0;
////}
//
////이자 계산기
////은행 예금 1억(x)을 저축했을 때 단리, 복리에 의한 이자가 얼마인지
////출력하는 프로그램
////단리:원금*이자*기간
////복리:(원금*이자율)*이자율
////입력 = 원금, 이자율 ,기간
//
//float Tim(float money=0, int month=0, float rate=0)
//{
//	//단리
//	//원금 + 이자 + 이자 + 이자 + 이자....
//	//이자 = 원금*이자율
//	//원금이 1000원, 이자율 5%라고 하면
//	//1000 * 0.05 = 50
//	//50원이 이자다
//	
//	//원금 * (이자율 * 개월수) + 1
//	//10000원 * (0.05 * 12) + 1
//	//10000 * 0.6 + 1
//	//6000 + 1
//	//6001
//	//float result = j * ((l * k)+1);
//
//	float add = money * rate; //이자
//	money += add * month;//원금 + 이자*개월수
//	
//	
//	
//	return money;
//
//
//}
//float Jim(float money = 0, int month = 0, float rate = 0)
//{
//	//1000원 10개월 0.1
//	//float add = money * rate; //이자
//	//float plus = 0;
//	//
//	//float wonsmoney = 0;
//	//float plusmoney = 0;
//	
//	for (float i = 0; i < month; i++)
//	{		
//		 money = money + (money * rate);
//
//		//plusmoney == money + (money * rate);
//		//wonsmoney == ((money + (money * rate)) * rate);
//		//plus += plusmoney + wonsmoney* rate;
//		
//		//원금 + (원금*이자율)
//		//money + (money * rate) -> A
//		//2번째달
//		//money + (money * rate) + ((money + (money * rate)) * rate);
//		// A + (A * rate)
//			//i += ((money + add)*3)/2;
//		//plus += i;
//	}
//
//
//	// 원금 + (원금*이자율) = plusMoney
//	// 원금 + 이자
//	// (원금 + (원금*이자율)) + ((원금 + (원금*이자율)) * 이자율)
//	// plusMoney + (plusMoney * 이자율)
//	////1번째달
//	//money + add;
//	////2번째달
//	//(money + add) > 이게 원금이 됐으니
//	//
//	
//	
//	
//	
//	//복리는?
//	//단리는 원금이 고정이었는데
//	//복리는 예를 들어 원금이 1000원, 이자율이 0.1이라고 하면
//	//1번째달 1000 + 1000*0.1 = 1000 + 100
//	//2번째달 1100 + 1100*0.1 = 1100 + 110
//	//3번째달 1210 + 1210*0.1 + 1210 + 121
//
//	//float result = j *  (1 + l * k);
//	
//	//return result;
//	return money;
//}
//int main()
//{
//	//double j, k, l;
//	//
//	//
//	//while (1)
//	//{
//	//	cin >> (j = 0);
//	//	cin >> (k = 0);
//	//	cin >> (l = 0);
//	//	
//
//	//	cout << "1.원금 " << j << endl; scanf_s("%1f", &j);
//
//	//	cout << "2. 년  "; scanf_s("%1f", &k);
//
//	//	cout << "3.이자율(%) "; scanf_s("%1f", &l);
//	//	l = 100.0;
//	//}
//	//	
//
//
//	//입력을 받는다. (원금(원), 이자율(%), 개월수). 그러면 입력을 3번 받는다.
//	//입력을 받는 데이터를 저장할 공간이 필요합니다. 3번 입력 받으니까 공간도 3개 필요
//	//공간은 변수를 선언해서 만드는 거라 변수를 3번 선언해야합니다.
//	//이자율은 소수로 들어올 수도 있어서(예를 들면 3.25) 이거는 int가 아니라 float으로 합니다.
//	//int는 소수가 아닌 정수(예를 들면 1,12,300)만 가능한데 float은(1.23 2.23 300 100)소수 정수 다 가능
//	//그래서 원금도 혹시 모르니 float으로 받을게요 10000 10000.6
//	
//	
//	
//	
//	//float money, rate; //소수까지 커버
//	//int month; //정수만
//	//cout << "원금, 개월수, 이자율을 입력해주세요." << endl;
//	//cin >> money >> month >> rate;
//
//	//
//
//	//	cout << "단리는 " << Tim(money, month, rate) << endl;
//	//	cout.precision(14);
//	//	cout << "복리는 " << Jim(money, month, rate);
//	//return 0;
//}