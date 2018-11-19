#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float roundToIeger=0.0,roundToTenths=0.0,roundToHundredths=0.0,roundToThousandths=0.0,x=0.0;

    cout << "please enter the number:";
    cin >> x;
    roundToIeger = floor( x*10+0.5 )/10;
    roundToTenths = floor( x*100+0.5 )/100;
    roundToHundredths = floor( x*1000+0.5 )/1000;
    roundToThousandths = floor( x*10000+0.5 )/10000;
    cout << "x="<< x << endl;

    cout << "roundToIeger=" << roundToIeger << endl;
    cout << "roundToTenths" << roundToTenths << endl;
    cout << "roundToHundredths"  << roundToHundredths << endl;
    cout << "roundToThousandths" << roundToThousandths << endl;

    return 0;
}
