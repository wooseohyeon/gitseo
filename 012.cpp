#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

//실습13
// 초밥 주무하면 접시가 쌓이고 먹으면 접시가 사라진다.
// 입력으로 1~10사이의 숫자를 입력하면 1번 접시부터 10번 접시까지 하나씩 쌓이고
//E를 입력하면 먹어서 접시가 하나씩 사라진다.
//입력할때마다 현재 쌓여있는 접시는 콘솔로 출력


	int Plate[] = { 0 };










int main()
{
	int Input;
	int output;
	cin >> Input;
	cin >> output;
	int Plate[100];
	int PlateNumber=0;

	Plate[PlateNumber] = Input;
	PlateNumber += 1;
	Plate[PlateNumber = 10] = output;
	PlateNumber -= 1;

	
}