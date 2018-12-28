#include<iostream>
using namespace std;

int main()
{
    long values1=200000;
    long values2;
    long *longPtr=&values1;

    values2=*longPtr;

    cout << "values2=" << values2 <<endl;
    cout << "values1=" << values1 <<endl;
    cout<<  "longPtr" << longPtr <<endl;

}
