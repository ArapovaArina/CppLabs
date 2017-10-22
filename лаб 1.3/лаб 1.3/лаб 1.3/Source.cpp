#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n;
	cout << "enter the number : ";
	cin >> n;
	if (n >= 10000)
	{
		cout << "NOT RIGHT";
	}
	else
	{
		int a, b, c, d;
		a = n / 1000;
		b = n % 1000 / 100;
		c = n % 100 / 10;
		d = n % 10;
		if (a == d && b == c) {
			cout << "Polindrom \n";
		}
		else {
			cout << "Not Polindrom \n";
		}
	}
	return 0;
}