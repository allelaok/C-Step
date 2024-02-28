#include <iostream>
using namespace std;
int main() {
  
    int a, b, c, n;

    cin >> a >> b >> c >> n;
    if ((c - a) == 0) {
        if (b <= 0)
            cout << 1;
        else
            cout << 0;
    }
    else if ((c - a) > 0 && n >= b / (c - a))
        cout << 1;
    else
        cout << 0;

    return 0;
}