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

	// ó�� �ۼ��ߴ� �ڵ尡 ������ ���µ� q3, q5�� 0���� �ʱ�ȭ�ϴ� ���� ���� ����� �õ��ؼ� ������ ����!
}