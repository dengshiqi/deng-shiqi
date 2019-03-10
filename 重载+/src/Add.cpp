#include "Add.h"
#include <iomanip>
using namespace std;

Add::Add()
{
    _a=1;
    _b=1;
}

Add::Add(int a,int b)
{
    _a=a;
    _b=b;//dtor
}
viod Add::()
{
    cout<< _a << "+" << _b << "i" << endl;
}
Add Add:: operator +(Add &c)
{
    this ->_a=c._a+this ->_a;
    this ->_a=c._b+this ->_b;
}
ostream& operator << (ostream &output, const Add&c1)
{
    output<<c1._a<< "+"<<c1._b << "i" <<endl;
    return output;
}
