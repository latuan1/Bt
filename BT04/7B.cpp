#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            string temp;
            temp.push_back(s[i]);
            temp.push_back(s[j]);
            cout << temp << " ";
            for (int k = 0; k < s.size(); k++)
            {
                cout << temp << s[k] << " ";
            }
        }
    }
}