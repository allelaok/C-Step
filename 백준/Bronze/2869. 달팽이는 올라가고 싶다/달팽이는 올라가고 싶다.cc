#include <iostream>
using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    int base = 0;
    int result = 1;

    result += (v - a) / (a - b);
    if (((v - a) % (a - b)) > 0) {
        result++;
    }
    cout << result;
    return 0;
}
