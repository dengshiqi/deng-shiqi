#include "Matrix.h"

Matrix::Matrix(int r,int c )
{
    x=r;
    y=c;
element =new T[r*c];
}

T::Matrix()::operator()(int i ,int j)const
{
return element[(i-1)*y+j-1]
}
Matrix MyMatrix::operator=(const MyMatrix& A)const
{
if (rows==m.x&&y==m.y)
{
    Matrix w(x,y);
    for(int i=0;i<x*y;iw.element[i]=element[i]-m.element[i]);
    return w;
}
}
ostream& operator <<(ostream &output,const Matrix&w)
{
    for(int i=0;i<w.x*w.y;i++)
    {
        output<<w.element[i]<<" ";
        if(i+1)%w.x==0)
        output<<endl;
    }
    return out;
}
