#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int n = 1;
    int p = 1;

    while (true) {
        x -= n;
        if (x <= 0) {
            if (p == 1)
                cout << 1 - x << "/" <<n + x;
            else
                cout << n + x << "/" << 1 - x;
            break;
        }
        p *= -1;
        n++;
    }
    return 0;
}
