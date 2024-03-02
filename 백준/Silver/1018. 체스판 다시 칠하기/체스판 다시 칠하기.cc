    #include <iostream>
   // #include<cmath>
    //using namespace std;

    int main() {
        int m, n;
        std::cin >> m >> n;

        char** arr = new char* [m];
        for (int i = 0; i < m; i++)
            arr[i] = new char[n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> arr[i][j];
            }
        }
        int cnt1 = 0;
        int cnt2 = 0;
        bool b;

        int result = 64;

        for (int i = 0; i <= m - 8; i++) {
            for (int j = 0; j <= n - 8; j++) {
                b = false;
                for (int k = i; k < i + 8; k++) {
                    for (int l = j; l < j + 8; l++) {
                        if (b) {
                            if (arr[k][l] == 'B')
                                cnt2++;
                            else
                                cnt1++;
                        }
                        else
                        {
                            if (arr[k][l] == 'B')
                                cnt1++;
                            else
                                cnt2++;
                        }
                        b = !b;
                    }
                    b = !b;
                }

                if (cnt1 > cnt2)
                    cnt1 = cnt2;
                if (cnt1 < result)
                    result = cnt1;
                cnt1 = 0;
                cnt2 = 0;
            }
        }
        std::cout << result;
        return 0;
    }

