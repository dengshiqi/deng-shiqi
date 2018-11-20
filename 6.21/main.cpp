#include <iostream>

using namespace std;

int main()
{
    int iseven=0,a=0;

    cout <<" please enter the number:";
    cin >> iseven;

    a = iseven%2;
    if( a==0 )
        cout << "true" << endl;
    if ( a!=0 )
        cout << "false" << endl;

    return 0;
}
