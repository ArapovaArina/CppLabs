#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	float a;
	const float p = 3.14;

	cin >> a;
	if (a <= 0) cout << 0; else if (a > 0 && a <= 1) cout << pow(a, 2) - a; else cout << pow(a, 2) - sin(p*pow(a, 2));

	return 0;
}