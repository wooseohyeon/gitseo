#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

//실습 12 - 데미지 계산기 ,함수 호출 끝나고 체력이 닳도록 
//데미지에서 방어력을 뺀만큼 체력이 닳도록, 그리고 DodgeRate확률로 반환
void TakeDamage(float Health, float Damage, float Armor, float DodgeRate)
{                   //참조자가 들어가지 않으면 복사가되는 거기때문에 *참조자를 붙여 
					//원본으로 직접해야 HP가 감소한다.
	srand(time(NULL));//한번만 호출

	int Rand = rand();  //임의의 큰수 반환
	double pick = (double)Rand / RAND_MAX;
	if (pick < DodgeRate)
	{
		return;
	}
	else
	{
		Health -= Damage - Armor;

	}
}
//void TakeDamage(float* Health, float Damage, float Armor, float DodgeRate)
//{
//	srand(time(NULL)); // 한번만 호출
//
//
//	int Rand = rand(); // 임의의 큰 수 반환
//	double Pick = (double)Rand / RAND_MAX;
//	if (Pick < DodgeRate) // DodgeRate == 0.01
//	{
//		// Show Dodge
//	}
//	else
//	{
//		if (Armor >= Damage)
//			return;
//
//		*Health -= Damage - Armor;
//	}
//}
	

  int main()
  {
	
	TakeDamage(100, 60, 30, 0.1);
	
  }