#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "введите натуральное число n = ";
	int n;
	cin >> n;
	int i;
	double pr=1;
	for (i = 1; i < n; i++) {
		pr = pr*(1 + 1 / pow(i, 2));
	}

	cout << pr;
	return 0;
}