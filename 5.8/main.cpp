
#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,min=10000;
    cout << "please enter the number:" << endl;
    cin >> a;

    for( int i=0; i<a ;i++)
    {
        cin >> b;
        if( b <= min )
        min = b;

    }
    cout << "min=" << min << endl;
    return 0;
}
