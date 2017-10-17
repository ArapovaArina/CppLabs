#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "¬ведите количество чисел : ";
	int n;
	cin >> n;
	cout << "¬ведите массив : \n";
	int *a = new int[n + 1];
	bool check = 1;
	int p;
	cin >> a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= a[i - 1] && check == 1)
		{
			check = 0;
			p = a[i];
		}
	}
	if (check == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
			if (i == (n / 2) - 1)
				cout << p << " ";
		}
	}
	else
	{
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			if (i % 2 != 0)
			{
				a[j] = a[i];
				j++;
			}
		}
		for (int i = 0; i < n / 2; i++)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}