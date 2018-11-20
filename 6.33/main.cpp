#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Head=0,Tail=0,flip=0;

    for(int i=1 ; i<101 ; i++)
        flip=rand()%2;

    if(flip==1)
        Head=Head+1;
    if(flip==0)
        Tail=Tail+1;

    cout << "Head is:" <<Head << endl;
    cout << "Tail is:" <<Tail << endl;

    return 0;
}
