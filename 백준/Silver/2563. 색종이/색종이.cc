#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool black[100][100];

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            black[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int X = x; X < x +10; X++) {
            for (int Y = y; Y < y + 10; Y++) {
                black[X][Y] = true;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (black[i][j])
                area++;
        }
    }

    cout << area;
    return 0;
}
