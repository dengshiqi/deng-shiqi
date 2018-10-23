
#include <iostream>

using namespace std;

int main()
{
  double a=0,b=0;
  while (a!=-1)
  {cout <<"Enter sales in dollars(-1 to end):";
  cin >>a;

  b=a*0.09+200;
  cout <<"Salary is:"<<b<<endl;
  }
  return 0;
}
