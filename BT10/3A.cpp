#include <iostream>

using namespace std;

struct Point
{
    double x,y;
};

Point mid_point(const Point& a, const Point& b)
{
    Point mid_point={(a.x+b.x)/2,(a.y+b.y)/2};
    return mid_point;
}

int main()
{
    Point a={1,2};
    Point b={3,4};
    cout << mid_point(a,b).x << " " << mid_point(a,b).y;
}
