#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0;
    cout <<"please enter the number:";
        cin >> a;
    for ( a=1;a<=1000;a++ )
    {
        int number=0;
        for( b=1;b<a;b++ )
        {
            if(a%b==0)
                number+=b;
        }
        if (number==a)
            cout <<" isperfect "<<a<< endl;
    }
    return 0;
}
