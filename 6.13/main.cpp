#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x=0.0,y=0.0;
    cout << "please enter the number:" ;
    cin >> x;

    y=floor (x+0.5);
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    return 0;
}
