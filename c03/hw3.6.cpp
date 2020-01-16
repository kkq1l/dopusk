#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int min=9, max=0;
	int var;
	cin >> n;

	while (n>0) {
		var = n % 10;
		if (var > max) {
			max = var;
		}
		if (var < min) {
			min = var;
		}
		n = n / 10;
	}

	cout <<"min="<< min <<"\nmax="<< max<<endl;

	system("pause");
}




