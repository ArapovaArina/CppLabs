
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите количество чисел: ";
	int n;
	cin >> n;
	cout << "Введите массив: \n";
	int *a = new int[n]; 
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
			max = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]) == max)
		{
			a[i] = 1;
		}
		else
		{
			a[i] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
