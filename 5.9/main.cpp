#include <iostream>

using namespace std;

int main()
{
    int a=0,a1=0,b=0,mul=1;
   for ( int i=0; i<15 ; i++)
     {
         cin >> a;
        b=a%2;
        if(b!= 0)
        {
            a1=a;
        mul = mul*a1;
        }
     }
    cout << " mul(1 to 15)= " << mul << endl;
    return 0;
}
