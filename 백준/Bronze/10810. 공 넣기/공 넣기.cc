#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	int* array = new int[n];
    
    for(int i = 0; i < n; i++){
        array[i] = 0;
    }

	for (int l = 0; l< m; l++) {
		int i, j, k;
		cin >> i >> j >> k;

		for (int g = i - 1; g < j; g++) {
			array[g] = k;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}

}