#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cout << "введите размер массива :";
	cin >> n;
	int *arr = new int[n];
	int max = 0;
	cout<<"введите число"<< endl; 
	for (int i = 0; i < n; i++) {
	cin >> arr[i];
	if (max < arr[i]) 
    max = arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (abs(arr[i]) != max) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
		}
	}
	cout << "преобразованная строка ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete[]arr;
	return 0;





}