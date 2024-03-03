    #include <iostream>
    #include<cmath>
    using namespace std;


    int main() {
        int n;
        cin >> n;
        
        int max = ceil(n / 3) + 1;

        for (int i = 0; i < max; i++) {
            for (int j = 0; j < max - i; j++) {
                if (3 * i + 5 * j == n) {
                    cout << i + j;
                    return 0;
                }
            }
        }
        cout << -1;
        return 0;
    }

