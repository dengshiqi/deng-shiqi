#include <iostream>
#include <cmath>

using namespace std;

inline double circleArea(double r)
{
    return 3.14159*r*r;
}
int main()
{
    double r=0.0;
    cout << "Please enter the r of circle:" ;
    cin >> r;

    circleArea(r);
    cout << "S=" << circleArea(r) << endl;
    return 0;
}
