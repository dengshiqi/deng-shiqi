  #include <iostream>
  #include <cmath>
using namespace std;

double distance()
{
    double x1=0, y1=0 , x2=0 , y2=0 ,distance=0;
    cout << "please enter four numbers:"
    cin >> x1 >> x2 >> y1 >> y2;

    distance = sqrt(x1 * x1 + x2 * x2 );
    return distance;
    cout << "distance=" <<distance<< endl;
}
