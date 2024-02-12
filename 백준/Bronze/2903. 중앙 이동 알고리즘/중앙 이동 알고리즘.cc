#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 4;

    for (int i = 0; i < n; i++) {
        int a = sqrt(result);
        result = pow(2 * a - 1, 2);
    }

    cout << result;
    return 0;
}
