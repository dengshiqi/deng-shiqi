#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H


class Polynomial
{
    friend std::ostream &operator << ( std:: ostream &, const Polynomial & );
    friend std::istream &operator << ( std:: istream &, Polynomial );

    public:
        Polynomial( int a=1,int b=1 );
        ~Polynomial();

        const Polynomial &operator+( const Polynomial &);
        const Polynomial &operator-( const Polynomial &);
        const Polynomial &operator*( const Polynomial &);
        const Polynomial &operator=( const Polynomial &);

        bool operator +=( const Polynomial &) const;
        bool operator -=( const Polynomial &) const;
        bool operator *=( const Polynomial &) const;

    private:
        double  *coe;
        int index;
};

#endif // POLYNOMIAL_H
