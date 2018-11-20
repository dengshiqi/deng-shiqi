#include <iostream>

using namespace std;

int tripleByValue(int c)
{
  c=3*c;
  return c;
}

int tripleByreference(int c)
{
    int c1;
    c1=c;
    c1=c1+3;
    return c1;
}

int main()
{
    int count=0;
    cin >> count;
    cout << " tripleByValue:" <<tripleByValue(count) << endl;
    cout << " tripleByrefrence:" <<tripleByreference(count) << endl;

    return 0;
}
