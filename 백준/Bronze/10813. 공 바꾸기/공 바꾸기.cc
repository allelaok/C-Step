
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	int* array = new int[n + 1];

	for (int i = 0; i < n + 1; i++) {
		array[i] = i;
	}

	for (int l = 0; l < m; l++) {
		int i, j;
		cin >> i >> j;
		int tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}

	for (int i = 1; i < n + 1; i++) {
		cout << array[i] << ' ';
	}
}