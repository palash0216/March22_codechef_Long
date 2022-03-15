#include <iostream>
using namespace std;
int main()
{

    int T;
    char str1[5], str2[5], out[6]="GGGGG";
    cin >> T;
    while (T--)
    {
        cin >> str1 >> str2;
        for (int i = 0; i < 5; i++)
        {
            if (str1[i] != str2[i])
                out[i] = 'B';
            else
                out[i] = 'G';
        }
        cout << out << endl;
    }
    return 0;
}