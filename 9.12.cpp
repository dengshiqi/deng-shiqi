#include<iostream>
using namespace std;
class Rectangle
{
private:
    float lenth;
    float width;
Rectangle()
    {
      lenth=1;
      width=1;
    }

    bool check(float lenth,float width)
    {
        bool a =false;
        if(lenth>0&&lenth<20&&width>0&&width<20)
            a=true;
        return a;
    }
public:
    float area(float lenth,float width)
    {
        float a=lenth*width;
        return a;
    }
    float perimeter(float lenth,float width)
    {
        float a=2*(lenth+width);
        return a;
    }


};
