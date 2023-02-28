#include <iostream>

using namespace std;

int main()
{
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    int a=(14-thang)/12;
    int y=nam-a;
    int m=thang+12*a-2;
    int n=(ngay+y+y/4-y/100+y/400+31*m/12)%7;
    switch (n)
    {
    case 0:
        {
            cout << "Sunday";
            break;
        }
    case 1:
        {
            cout << "Monday";
            break;
        }
    case 2:
        {
            cout << "Tuesday";
            break;
        }
    case 3:
        {
            cout << "Wednesday";
            break;
        }
    case 4:
        {
            cout << "Thursday";
            break;
        }
    case 5:
        {
            cout << "Friday";
            break;
        }
    case 6:
        {
            cout << "Saturday";
            break;
        }
    }
}
