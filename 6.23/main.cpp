#include <iostream>

using namespace std;

int main()
{
    int fillCharacter=0;
    cout << "please enter the side:";
    cin >> fillCharacter;
    string a="";

    for(int i=0 ; i < fillCharacter ; i++)
       {
           a= a + "#";
       }
    for(int i=0; i< fillCharacter ; i++)
        {
            cout << a << endl;
        }
    return 0;
}
