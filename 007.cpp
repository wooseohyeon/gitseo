#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	float x1 = 0;
	float x2 = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	x1 = (-b + (float)sqrt(b * b - 4 * a * b)) / (2 * a);
	x2 = (-b - (float)sqrt(b * b - 4 * a * b)) / (2 * a);


	cout << x1 << endl;
	cout << x2 << endl;

	return 0;
}