#ifndef ADD_H
#define ADD_H
#include <iostream>

class Add
{
    friend std::ostream &operator << (std::ostream&,const Add &);
    public:
         Add();
         Add(int a,int b);
         Add operator +(Add &c);

    private:
        int _a;
        int _b;
};


#endif // ADD_H
