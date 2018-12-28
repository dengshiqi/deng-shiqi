#include<iostream>
#include<array>
using namespace std;

int main()
{
array< int ,6 >alphabet={1,2,3,4,5,6}; //(a)
cout << alphabet[5];

float a;   //(b)
cin >> a;
array < float,4 > grades;
grades [3] = a;

array< int ,5 > values={8,8,8,8,8};  //(c)

const size_t arraySize = 100;   //(d)
array< float,arraySize > temperatures;

for( size_t i=0;i<temperatures.size();i++)
{
    temperatures[i]=i+1;
}
float result=0;
for(size_t j=0;j<temperatures.size();j++)
{
    result=result+temperatures[j];
}
cout<<"sum ="<<result<<endl;


array<double,11>a; //(e)
array<double,34>b;
for(size_t i=0;i<11;i++)

{
    b[i]=a[i];
}


array<float,99> w; //(f)
float max,min;
max=w[0];
min=w[0];
for(size_t j=0;j<9999;j++)
{
    if(max<w[j])
    {
        max=w[j];
    }
    if(min>w[j])
    {
        min=w[j];
    }
}
cout << "max="<< max << endl;
cout << "min=" <<min;
return 0;

}
