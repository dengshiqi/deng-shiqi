#include <iostream>

using namespace std;

 int integerPower(int base,int exponent)
   {
       int a=1,i=0;
       for(i=0; i<exponent; i++)
        a*=base;
        return a;
   }
 int main()
{
    int b=0;
    int base=0,exponent=0;

    cout << "please enter base and exponent:";
    cin >> base >> exponent;

     b=integerPower(base,exponent);
    cout << "inegerPower(base,exponent):" << b << endl;
    return 0;
}
