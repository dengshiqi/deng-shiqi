#include <iostream>
#include <cmath>

using namespace std;

  double hypotenuse(double a, double b)
 {
     double c=0.0;
     c = sqrt(a*a+b*b);//sanjiaoxing liangbian qiu disanbian
     return c;
 }
int main()
{
    double a=0.0,b=0.0,d=0.0;
    cout << "please enter two numbers:" ;
    cin >> a >> b;
    d = hypotenuse(double a,double b);
    cout <<"a="<<a<<"b="<<b<<"hypotenuse"<<hypotenuse<<endl;

    return 0;
}
