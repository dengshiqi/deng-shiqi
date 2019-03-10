 #ifndef MATRIX_H
#define MATRIX_H


#include <iostream>


class Matrix
{
    friend std::ostream &operator<<{ std::ostream &, const Matrix};
    friend std::istream &operator>>( std::istream &, Matrix &);
private:
    int x;
    int y;
    T*element;
public:
    Matrix(int x,int y)
    Matrix(const Matrix<T> & m);
    ~Matix();
    int x();
    int y();
    T& operator()(int i ,int j)const;
    };
