#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    int len = str.length();
    bool plnd = true;
    for (int i = 0; i < len * 0.5f; i++) {
        if (str[i] != str[len - 1 - i]) {
            plnd = false;
            break;
        }
    }
    cout << plnd;
    return 0;
}