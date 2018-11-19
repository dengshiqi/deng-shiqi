#include <iostream>

using namespace std;

 int multiple(int a,int b)
 {
     int multimple;
     multimple = b%a;
     return multimple ;
 }
int main()
{
    int a=0,b=0,c=0,multimple=0;

    cout << "please enter two numbers:";
    cin >> a >> b;

    c = multimple;

    if (c == 0)
        cout << "ture";
    else
        cout << "false";

    return 0;
}
