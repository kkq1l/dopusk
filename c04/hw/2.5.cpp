#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,y,a,q=0;
	cin >> n;
	long long* x = new long long[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	if (x[0] == 0) cout << 0;
	else {
		for (int i = 0; i < n; i++) {
			if (x[i] != 0) {
				cout << x[i] << " ";
			}
			else {
				cout << x[i]; break;
			}
		}
	}




}
