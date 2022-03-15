#include <iostream>
using namespace std;
int main()
{

    int T, a, b, c;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        if (a == b && b == c && a == c)
        {
            cout << a << endl;
        }
        else if (a >= b && a > c)
            cout << a << endl;
        else if (a <= b && b > c)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}