#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3;
	double AB, BC, CA;
	double p;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	CA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	p = (AB + BC + CA) / 2;
	cout << sqrt(p * (p - AB) * (p - BC) * (p - CA));

	return 0;
} 



