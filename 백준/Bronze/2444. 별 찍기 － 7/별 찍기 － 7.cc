#include <iostream>
using namespace std;
int main() {
    int N;
    cin >>  N;
    int n = N - 1;
    for (int i = 0; i < 2 * n + 1; i++) {

        int k = n - i;
        if (k < 0) k *= -1;
        
        for (int j = 0; j < k; j++)
            cout << " ";
        for (int j = 0; j < 2 * (n - k)+1; j++)
            cout << "*";

        if(i != 2*n)
        cout << "\n";
    }
    return 0;
}