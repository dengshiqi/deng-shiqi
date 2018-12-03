#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0;
    cout << "please enter the number:" ;
    cin >> a;
if(a != 1)
  {
    for(int i=1; i<=a; i++)
       b=a-1;
       a=a*b;
  }
        cout << " jiechen= " << a << endl;
    return 0;
}
