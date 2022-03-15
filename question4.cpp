#include <iostream>
using namespace std;
int main()
{

    long int T, N;
    cin >> T;
    while (T--)
    {

        cin >> N;
        if (N%7 == 6)
            cout << (N/7)+1 << endl;
        else
            cout << N / 7 << endl;
    }
    return 0;
}