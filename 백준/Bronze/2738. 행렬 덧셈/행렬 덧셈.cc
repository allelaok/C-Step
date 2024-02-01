#include <iostream>
using namespace std;

int main() {
    int N;
    int M;
    cin >> N;
    cin >> M;

    int** A = new int* [N];
    int** B = new int* [N];
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
        B[i] = new int[M];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int num;
            cin >> num;
            A[i][j] = num;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int num;
            cin >> num;
            B[i][j] = num;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        if(i != N-1)
        cout << "\n";
    }

    return 0;
}
