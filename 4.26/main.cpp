#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout<<"please enter the number:"<<endl;
    cin >> b;

    c=b;
    while(b!= 0)
    {
        a=a*10+b%10;
        b=b/10;
    }
    if(a==c)
        cout << "This is true"<<endl;
    else
    cout << "This is false" << endl;

    return 0;
}
