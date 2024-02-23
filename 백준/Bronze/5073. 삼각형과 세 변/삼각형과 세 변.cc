#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    while (true) {
        cin >> a >> b >> c;

        if (a == 0)
            return 0;

        int max = a;
        int sum = b + c;
        if (max < b) {
            max = b;
            sum = c + a;
        }
         if (max < c)
        {
            max = c;
            sum = b+ a;
        }


         if (max >= sum)
            cout << "Invalid" << endl;
        else  if (a == b && b == c)
            cout << "Equilateral" << endl;
        else if (a != b && b != c && a != c)
            cout << "Scalene" << endl;
        else
            cout << "Isosceles" << endl;
    }
}