#include <iostream>
using namespace std;
int main()
{

    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        int num = X / (Y * 2);
        cout << num << endl;
    }
    return 0;
}