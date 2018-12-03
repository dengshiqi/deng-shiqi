#include <iostream>

using namespace std;

int main()
{
   int count = 0 ;
   bool break = false;
   for ( count = 1; ( count <= 10 ) ; count++ )
   {
      if ( count == 5 )
         break = true;
      else
         cout << count << " ";
   }
}
