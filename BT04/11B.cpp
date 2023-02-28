// Password

#include <iostream>
using namespace std;
bool isMirror(string s)
{
    int n = s.length();
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    string password[n];
    int len[n];
    for (int i = 0; i < n; i++)
        cin >> password[i];
    for (int i = 0; i < n; i++)
        len[i] = password[i].length();
    for (int i = 0; i < n - 1; i++)
    {
        if (len[i] % 2 == 0)
            break;
        for (int j = i + 1; j < n; j++)
        {
            if (len[i] == len[j] && i != j)
            {
                string s = password[i] + password[j];
                if (isMirror(s))
                {
                    cout << len[i] << " " << password[i][len[i] / 2];
                    return 0;
                }
            }
        }
    }
}
