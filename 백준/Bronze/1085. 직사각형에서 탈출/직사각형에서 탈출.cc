#include <iostream>
using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int m = x;
    if (w - x < m)
        m = w - x;
    if (y < m)
        m = y;
    if (h - y < m)
        m = h - y;

    cout << m;

    return 0;
}