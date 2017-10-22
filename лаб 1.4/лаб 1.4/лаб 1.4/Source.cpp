#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int n, k=0, pr=1;
	cout << "enter the sequence of numbers \n";
	cin >> n;
	while (n != 0) {
		if (n % 2 == 0) {
			k = k + 1;
			pr = pr*n;
			
		}cin >> n;
	}
	        cout <<"number of even = "<< k<<endl;
			cout << "product of even numbers = " << pr;

	return 0;
}