#include<iostream>
#include<array>
using namespace std;

int main()
{
   array< int,10> counts={0,0,0,0,0,0,0,0,0,0};

   array< int,15> bonus={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(size_t i=0;i<15;i++)
    {
       bonus[i]+=1;
    }

   array< double,12>  monthlyTemperatures;
    double a=0;
    for(size_t i=0;i<12;i++)
    {
        cin>>a;
        monthlyTemperatures[i]=a;

    }


    for(size_t i;i<5;i++)
    {
        cout<<counts[i]<<endl;
    }

}

