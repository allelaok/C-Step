    #include <iostream>
    #include<cmath>
    using namespace std;

    bool EndNum(int n) {
        int cnt = 0;
        while (n > 0)
        {
            if (n % 10 == 6) {
                cnt++;
                if (cnt == 3)
                    return true;
            }
            else
            {
                cnt = 0;
            }
            n /= 10;
        }
        return false;
    }

    int main() {
        int n;
        cin >> n;
        int result = 666;
        int cnt = 1;
        while (true) {
            if (n == cnt) {
                cout << result;
                break;
            }
            result++;

            if (EndNum(result))
                cnt++;
        }

        return 0;
    }

