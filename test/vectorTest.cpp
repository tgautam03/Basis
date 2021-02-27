#include "./include/VectorInt.h"
#include "./include/VectorDb.h"

int main()
{
    VectorDb v1, v2(4), v3(5, 7.2), v4(v3);

    v1 = v3 + v4;

    VectorDb vSub, vMul; 
    double vDot; 
    vSub = v3 - v4;
    vMul = v3 * v4;
    vDot = dot(v3, v4);


    v1.show();
    v2.show();
    v3.show();
    v4.show();
    vSub.show();
    vMul.show();
    std::cout << "Dot product is: " << vDot << std::endl;

    return 0;
}