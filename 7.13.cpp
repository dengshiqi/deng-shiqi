#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int ,20> array={};
    int a=0;
    size_t b=0;
    for(size_t i=0;i<20;i++)
    {
        cin>>a;

        for(size_t j=0;j<=b;j++)
        {
        if(a!=array[j])
        {
          array[b]=a;
          b++;
        }
        }
    }

}
