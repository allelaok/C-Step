#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int xmin, ymin;
    int xmax, ymax;

    int x, y;
    cin >> x >> y;

    xmin = x;
    ymin = y;
    xmax = x;
    ymax = y;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        if (xmin > x)
            xmin = x;
        if (ymin > y)
            ymin = y;
        if (xmax < x)
            xmax = x;
        if (ymax < y)
            ymax = y;
    }
    cout << (xmax - xmin) * (ymax - ymin);

    return 0;
}