#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  Matrix<int>matrix(2,3)
  matrix(1,1)=1;
  matrix(1,2)=2;
  matrix(1,3)=3;
  matrix(2,1)=4;
  matrix(2,2)=5;
  matrix(2.3)=6;
  cout<<matrix(1,3)<<endl;
  cout<<matrix<<endl;
}
