#include <iostream>
using namespace std;
int fun(int n)
{
    return 2 * n;
}
int main()
{

    long int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << (N + 1) / 2 << endl;
    }
    return 0;
}