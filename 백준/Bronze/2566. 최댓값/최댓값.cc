#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int x = 1;
    int y = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n;
            if (n > max) {
                max = n;
                x = i;
                y = j;
            }
        }
    }

    cout << max << "\n";
    cout << x + 1 << " " << y + 1;
    return 0;
}
