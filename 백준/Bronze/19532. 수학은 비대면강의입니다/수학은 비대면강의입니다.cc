    #include <iostream>
   // #include<cmath>
    using namespace std;

    int main() {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int x, y;
        if (a == 0)
        {
            y = c / b;
            x = (f - e * y) / d;
        }
        else
        {   
            y = (a * f - d * c) / (a * e - b * d);
            x = (c - b * y) / a;
        }

        cout << x << " " << y;

    return 0;
}