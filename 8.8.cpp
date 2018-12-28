#include<iostream>
using namespace std;
int main()
{
    unsigned int values[5]={2,4,6,8,10};//(a)

    unsigned int *vPtr;  //(b)

    for(int i=0;i<5;i++) //(c)
    {
        cout<< values[i] <<endl;
    }


    for(int i=0;i<5;i++)  //(e)
    {
        cout<<*(vPtr+i)<<endl;
    }

    for(int i=0;i<5;i++)  //(f)
    {
        cout<< vPtr[i] <<endl;
    }


     cout<<values[4]<<endl;

      cout<<vPtr[4]<<endl;

     cout<<*(vPtr+4)<<endl;
     return 0;
}
