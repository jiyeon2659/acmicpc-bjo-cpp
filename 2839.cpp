#include <iostream>
using namespace std;

int main() {
	int n;

	int q3 = 0;
	int q5 = 0;

	cin >> n;

	while ((n % 5) != 0 && n >= 0) {
		n -= 3;
		q3++;
	}

	if (n < 0) {
		cout << -1 << endl;
	}
	else {
		q5 = n / 5;
		cout << q5 + q3 << endl;
	}

	return 0;

	// 처음 작성했던 코드가 오류가 났는데 q3, q5를 0으로 초기화하는 과정 없이 계산을 시도해서 오류가 났음!
}