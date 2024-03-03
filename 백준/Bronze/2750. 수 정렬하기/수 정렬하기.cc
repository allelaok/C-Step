    #include <iostream>
    #include<cmath>
    using namespace std;


    int main() {
        int n;
        cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int minIdx;
        for (int i = 0; i < n; i++) {
            minIdx = i;
            for (int j = i; j < n; j++) {
                if (arr[minIdx] > arr[j])
                    minIdx = j;
            }
            int tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
    }

