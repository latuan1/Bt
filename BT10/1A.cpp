#include <iostream>

using namespace std;

struct Point
{
    double x,y;
};

void print(Point a)
{
    cout << "(" << a.x << "," << a.y << ")" << endl;
}

int main()
{
    Point inputPoint={1,2};
    print(inputPoint);
}
