#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

//�ǽ� 12 - ������ ���� ,�Լ� ȣ�� ������ ü���� �⵵�� 
//���������� ������ ����ŭ ü���� �⵵��, �׸��� DodgeRateȮ���� ��ȯ
void TakeDamage(float Health, float Damage, float Armor, float DodgeRate)
{                   //�����ڰ� ���� ������ ���簡�Ǵ� �ű⶧���� *�����ڸ� �ٿ� 
					//�������� �����ؾ� HP�� �����Ѵ�.
	srand(time(NULL));//�ѹ��� ȣ��

	int Rand = rand();  //������ ū�� ��ȯ
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
//	srand(time(NULL)); // �ѹ��� ȣ��
//
//
//	int Rand = rand(); // ������ ū �� ��ȯ
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