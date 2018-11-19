#include <iostream>

using namespace std;

int main()
{
    double a=0, b=0, c=0,d=0,f=0, g=0,total=0,h=0;
    cout << "Enter miles driven(-1 to quit):" ;
    cin >> a;
    cout <<"Enter gallons used:" ;
    cin >> b;

    c=a/b;
    f=a;
    g=b;

    while(a!= -1)
    {
        d=f+a;
        h=g+b;
       total=d/h;



    }

    cout << "MPG this trip:"<< c << endl;
    cout << "Total MPG:" << total << endl;
    return 0;
}
