#include <iostream>

using namespace std;

int main()
{
   int a=0 ;
   double pi =0.0 ,c=0.0 ,b=0.0;
   cout << "please enter the number:(from 1 to 1000)" ;
   cin >> a;

   for(int i=1; i<=a; i++)
   {
       if(a%2==0)
        b=-4.0;
       if(a%2==1)
        b=4.0;
    c= b/(2*i-1);
    pi= pi+c;
    }

   cout << "pi=" << pi << endl;

}
