#include<iostream>
#include<array>
#include<vector>

using namespace std;
int main()
{
    vector <int> a_vector;

    int a=0;
    cin>>a;

    a_vector.push_back(a);
    for(size_t i=1;i<20;i++)
    {
        cout << "please enter the number:";
        cin>>a;
        for(size_t j=0;j<a_vector.size();j++)
        {
        if(a==a_vector[j])
        {
            int e=0;
        }else
        {
          a_vector.push_back(a);
        }
        }
    }

}
