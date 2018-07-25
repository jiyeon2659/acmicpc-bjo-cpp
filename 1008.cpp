#include <iostream>
using namespace std;

int main() {
	double a, b, result;
	cin >> a >> b;

	if (a < 0 || b > 10) {
		return -1;
	}

	result = a / b;
	cout << fixed;
	cout.precision(9);
	cout << result << endl;

	return 0;
}