#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> c;
    int tmp;

    cin >> tmp;
    if (tmp == a) {
        cin >> d;
        cin >> b;
        cin >> tmp;

        if (tmp == c)
            cout << b << " " << d;
        else
            cout << b << " " << c;
    }
    else {
        b = tmp;
        cin >> tmp;
        if (tmp != c) {
            d = tmp;
            cin >> tmp;
            if (tmp == b)
                cout << a << " " << d;
            else
                cout << b << " " << c;
        }
        else {
            cin >> tmp;
            cin >> d;
            if (tmp == b)
                cout << a << " " << d;
            else
                cout << b << " " << d;
        }
    }

    return 0;
}