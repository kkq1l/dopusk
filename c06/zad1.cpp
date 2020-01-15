#include <iostream>
#include <cmath>
using namespace std;
double dist(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main()
{
	int n;
	double a,b,c,k=0;
	double  s = 1,p = 0;
	n = 3;
	long long* x = new long long[n];
	long long* y = new long long[n];
	for (int i = 0; i < n; i++) {
		cout << "x{" << i << "]= "; cin >> x[i];
		cout << "\ny{" << i << "]= "; cin >> y[i];
	}

	a = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
	b = sqrt((x[2] - x[1]) * (x[2] - x[1]) + (y[2] - y[1]) * (y[2] - y[1]));
	c = sqrt((x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]));

	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));

	if (s > 0) {
		if (k < dist(x[0], y[0], x[1], y[1])) k = dist(x[0], y[0], x[1], y[1]);
		if (k < dist(x[1], y[1], x[2], y[2])) k = dist(x[1], y[1], x[2], y[2]);
		if (k < dist(x[2], y[2], x[0], y[0])) k = dist(x[2], y[2], x[0], y[0]);
		cout << k;
	}
	else {
		cout << "-1";
	}
}




