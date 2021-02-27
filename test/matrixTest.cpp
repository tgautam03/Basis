#include "./include/MatrixInt.h"
#include "./include/MatrixDb.h"

int main()
{
    MatrixDb m1;
    MatrixDb sum, sub, prod, dotProd;
    MatrixDb m2(5, 4, 2.2);
    MatrixDb m3(4, 5, 9);
    MatrixDb m4(4, 5, 1.56);
    bool eq;

    sum = m3 + m4;
    sub = m3 - m4;
    prod = m3 * m4;

    if (m3 == m4)
        std::cout << "Same Matrices \n";
    else
        std::cout << "Different Matrices \n";

    dotProd = dot(m4, m2);
    

    m1.show();
    std::cout << std::endl;
    m2.show();
    std::cout << std::endl;
    m3.show();
    std::cout << std::endl;
    sum.show();
    std::cout << std::endl;
    sub.show();
    std::cout << std::endl;
    prod.show();
    std::cout << std::endl;
    dotProd.show();
    return 0;
}