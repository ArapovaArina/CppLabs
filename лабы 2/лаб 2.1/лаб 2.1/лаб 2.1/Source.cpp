#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n; 
	cout << "������� ���������� �����: ";
	cin >> n; 

	int *a = new int[n]; 
	
	for (int i = 0; i < n; i++) 
	{ cout << "������� ������: \n";
		cin >> a[i];  }
	int sum = 0;
	for (int i = 0; i<n; i++)
		sum = a[i];

	for (int i = 0; i<n; i++)
		b[i] = (sum - a[i]) / (n - 1);
	cout �; " " b;
	
	return 0;
}

	
	