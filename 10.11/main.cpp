#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
    Polynomial n1
    polyminal f1(2, 4);
    polyminal f2(4, 8);


    Polyminal res = f1 + f2;
    f1.print();
    std::cout << "+";
    f2.print();	std::cout << "=";
    res.print();
    std::cout << "\n";


    Polyminal res1 = f1 - f2;
    f1.print();
    std::cout << "-";
    f2.print();
    std::cout << "=";
    res1.print();
    std::cout << "\n";


    Polyminal res2 = f1 * f2;
    f1.print();
    std::cout << "*";
    f2.print();
    std::cout << "=";
    res2.print();
    std::cout << "\n";


    Polyminal res3 = f1 / f2;
    f1.print();
    std::cout << "/";
    f2.print();
    std::cout << "=";
    res3.print();
    std::cout << "\n";


    Polyminal res4 = f1 += f2;
    f1.print();
    std::cout << "+=";
    f2.print();
    std::cout << "=";
    res4.print();
    std::cout << "\n";

    Polyminal res5 = f1 -= f2;
    f1.print();
    std::cout << "-=";
    f2.print();
    std::cout << "=";
    res5.print();
    std::cout << "\n";

    Polyminal res6 = f1 *= f2;
    f1.print();
    std::cout << "*=";
    f2.print();
    std::cout << "=";
    res6.print();
    std::cout << "\n";

    return 0;
}
