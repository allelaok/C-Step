    #include <iostream>
    #include<cmath>
    using namespace std;

    int sum(int n) {
        int result = 0;
        int i = 0;
        while (n > 0) {

            result += n % 10;
            n = floor(n / 10);
            i++;
        }

        return result;
    }

    int main() {
        int N;
        cin >> N;
        for (int i = N - 60; i < N; i++)
        {
            if ((sum(i) + i) == N) {
                cout << i;
                return 0;
            }
        }
        cout << 0;
        return 0;
    }

