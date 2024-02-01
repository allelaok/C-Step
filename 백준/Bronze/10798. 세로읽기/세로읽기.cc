#include <iostream>
using namespace std;

int main() {
    string array[5];
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 15; i++) {
        bool allSpace = true;
        for (int j = 0; j < 5; j++) {
            if( i < array[j].length()) {
                cout << array[j][i];
                allSpace = false;
            }
        }
        if (allSpace) break;
    }
    return 0;
}
