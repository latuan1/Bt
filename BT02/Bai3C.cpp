#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b + c || b >= c + a || c >= a + b)
        cout << "Invalid";
    else
    {
        cout << a + b + c << endl;
        if (a == b && b == c)
            cout << "deu";
        else
        {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
                cout << "vuong";
            else
            {
                if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
                    cout << "can";
                else
                    cout << "thuong";
            }
        }
    }
    return 0;
}
