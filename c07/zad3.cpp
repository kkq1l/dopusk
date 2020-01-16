#include <iostream>

using namespace std;
int res = 0;

unsigned rev(unsigned n, unsigned q) {
	if (n == 0) {
		return q; }
	else {
		q = q * 10 + n % 10;
		n = n / 10;
		return rev(n, q); }
}

int main() {
	unsigned n;
	cin >> n;
	cout << rev(n, 0);
}