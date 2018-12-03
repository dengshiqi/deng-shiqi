#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,b1=0;
    cout << "please enter the number:" << endl;
    cin >> a;

    for( int i=0; i<a ;i++)
      {
          b1=b;
          cin >> b;
          b = b1 + b;
      }
      cout << "sum=" << b << endl;
    return 0;
}
