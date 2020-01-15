#include <iostream>
#include <cmath>
using namespace std;

int n = 10;

int sum3(int* A, int i) {
	int sum = 0;
	if ((i != 0) && (i != n-1)) sum = A[i - 1] + A[i] + A[i + 1];
	else {
		if (i == 0) sum = A[i] + A[i + 1] + A[n-1];
		else  sum = A[i] + A[0] + A[i - 1];
	}
	return sum;
}
int main()
{
	int* x = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "x[" << i << "]= "; cin >> x[i];
	}
	int i;
	cout << " i= ";
	cin >> i;
	cout << sum3(x, i);

}




