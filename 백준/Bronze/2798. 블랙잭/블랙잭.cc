#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int* cards = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum == m) {
                    cout << sum;
                    return 0;
                }
                else if (sum < m) {
                    if (sum > max)
                        max = sum;
                }
            }
        }
    }

    cout << max;

    return 0;
}