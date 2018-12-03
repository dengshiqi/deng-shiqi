#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout <<"please enter the number(1-19):";
    cin >> a;

   for ( int i= 1; i<a-2; i+=2 )
   {

      for ( int j=(a-i)/2; j>0; j-- )
         cout << ' ';
      for ( int k=1 ; k <= i; k++ )
         cout << '*';
         cout << endl;
   }
   for ( int i= a; i >= 0; i-=2 )
   {
      for ( int j = (a-i)/2 ; j >0; j-- )
         cout << ' ';

      for ( int k = 1;k <= i;k++ )
         cout << '*';
         cout << endl;
   }
}
