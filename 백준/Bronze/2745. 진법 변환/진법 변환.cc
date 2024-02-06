#include <iostream>
using namespace std;

int main() {
	string n;
	int b, result = 0;

	cin >> n >> b;

	int len = n.length();
	int tmp = 1;

	for (int i = len - 1; i >= 0; i--) {
		int num;

		if ('0' <= n[i] && n[i] <= '9') {
			num = n[i] - '0';
		}
		else {
			num = n[i] - 'A' + 10;
		}

		result += tmp * num;
		tmp *= b;
	}

	cout << result;

	return 0;
}