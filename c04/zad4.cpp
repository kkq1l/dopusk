#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,y,a,q=0;
	cin >> n;
	long long* x = new long long[n];
	x[0] = 0;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a > x[i - 1]) x[i] = a;
		else { cout << "ERROR"; q = 1; break; }
	}
	if (q != 1) {
		cout << " input y";
		cin >> y;
		for (int i = 0; i < n; i++) {
			if (y == x[i]) cout << i;
		}
	}




}
