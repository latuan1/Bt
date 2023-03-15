#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int cnt = 0;
    string s1 = argv[1], s2 = argv[2];

    for (int i = 0; i < s2.size() - s1.size() + 1; i++)
    {
        string t = s2.substr(i, s1.size());
        if (!strcmp(s1.c_str(), t.c_str()))
            cnt++;
    }
    cout << cnt;
}
