    #include <iostream>
    #include<cmath>
    using namespace std;


    int main() {
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxIdx;
        for (int i = 0; i < k; i++)
        {
            maxIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[maxIdx])
                {
                    maxIdx = j;
                }
            }
            int tmp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = tmp;
        }

        cout << arr[k - 1];
        return 0;
    }

