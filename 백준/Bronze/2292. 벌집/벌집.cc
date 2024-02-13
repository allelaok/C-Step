#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r = 1;
    if (n != 1) {
        while (true) {
            r++;
            if (n - 7 <= (3 * r + 3) * (r - 2)) {
                break;
            }
        }
    }
    cout << r;
    return 0;
}