#include <iostream>

using namespace std;

void Number(int number)
{
    while (number>0)
    {
        cout <<number%10;
        number /=10;
    }
}

int main()
{
   int number;
   cout <<"please enter the number:";
   cin >> number;
   Number(number);
    return 0;
}
