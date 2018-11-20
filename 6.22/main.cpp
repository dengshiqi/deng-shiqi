#include <iostream>

using namespace std;

int main()
{
    int side=0;
    cout << "please enter the side:";
    cin >> side;
    string a="";

    for(int i=0 ; i < side ; i++)
       {
           a= a + "*";
       }
    for(int i=0; i< side ; i++)
        {
            cout << a << endl;
        }
    return 0;
}
