
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,d,e,f;
    double Newbalance,Account,Creditlimit,Balance,CreditLimitExceeded;


   while(a != -1)
   {
    cout <<"Enter account number(or -1 to quit):";
       cin >>a;
    cout <<"Enter beginning balance:";
       cin >>b;
    cout <<"Enter total charges:";
       cin >>c;
    cout <<"Enter total credits:";
       cin >>d;
    cout <<"Enter credit limit:";
       cin >>e;


    Newbalance=b+c-d;
    Account= a;
    Creditlimit =e;
    Balance=Newbalance;

    cout <<"New balance is:"<<Newbalance<<endl;
    cout <<"Account:"<<Account<<endl;
    cout <<"Credit limit:"<<Creditlimit<<endl;
    cout <<"Balance:"<<Balance<<endl;

   while(Creditlimit <= Balance)
        cout <<"Credit Limit Exceeded."<<endl;

    }
    return 0;
}
