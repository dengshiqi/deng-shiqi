#include <iostream>

using namespace std;

int main()
{
double a=0,b=0,c=0,d=0;
    cout<<"please enter three numbers:";//side length of the triangle
    cin >> a >> b>> c;

    if(a*a+b*b==c*c)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
