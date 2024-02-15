#include <iostream>
using namespace std;
#include <list> 
int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == -1) {
            break;
        }
        int r = 0;
        list<int> a;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                r += i;
                a.push_back(i);
            }
        }
       

        if (r == n) {
            cout << n << " = ";
            // 반복자 생성 
            list<int>::iterator iter = a.begin();
            // 리스트 출력 
            for (iter = a.begin(); iter != a.end(); iter++)
            {
                if (*iter != a.back()) {
                    cout << *iter << " + ";
                }
                else {
                    cout << *iter << "\n";
                }
            }
        }
        else {
            cout << n << " is NOT perfect." << "\n";
        }
    }
    return 0;
}