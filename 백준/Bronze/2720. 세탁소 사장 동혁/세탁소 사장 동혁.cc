#include <iostream>
using namespace std;

int main() {
    int t, c;
    cin >> t;
    int a[4] = { 25, 10, 5, 1 };
    for (int i = 0; i < t; i++) {
        cin >> c;
        for (int j = 0; j < 4; j++) {
            int n = c / a[j];
            cout << n << " ";
            c -= n * a[j];
        }
        cout << "\n";
    }
    return 0;
}
