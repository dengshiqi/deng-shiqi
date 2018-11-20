#include <iostream>

using namespace std;

int main()
{
    double a=0.0 , b=0.0 , c=0.0;
    cout << "please enter three numbers:";
    cin >> a >> b >> c;

    if(a<b&&a<c)
        cout << "min=" << a << endl;
    if(b<c&&b<a)
       cout << "min=" << b << endl;
    if (c<a&&c<b)
        cout << "min=" << c << endl;
    return 0;
}
