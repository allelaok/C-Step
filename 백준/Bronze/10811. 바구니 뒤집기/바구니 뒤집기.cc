#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	int* array = new int[n + 1];
	int* array2 = new int[n + 1];

	for (int i = 0; i < n + 1; i++) {
		array[i] = i;
		array2[i] = i;
	}

	for (int l = 0; l < m; l++) {
		int i, j;
		cin >> i >> j;
		// i ~ j 역순으로
		for (int k = i; k < j + 1; k++) {
			array2[k] = array[j + i - k];
		}

		for (int k = i; k < j+ 1; k++) {
			array[k] = array2[k];
		}
	}

	for (int i = 1; i < n + 1; i++) {
		cout << array[i] << ' ';
	}
}