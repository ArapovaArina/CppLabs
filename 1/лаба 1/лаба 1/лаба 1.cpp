#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double a, b, x, y, z;
	const double e = 2.718281828459045;
	cin >> x >> y >> z;

	a = 3 + pow(e, y - 1) / 1 + pow(x, 2)*abs(y - tan(z));
	b = 1 + abs(y - x) + pow(y - x, 2) / 2 + pow(abs(y - x), 3) / 3;

	cout << a << endl << b;


	return 0;
}