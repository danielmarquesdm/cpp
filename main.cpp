#include <iostream>
#include "compra.h"

using namespace std;

Compra m1(Compra c)
{
    return {1, "Jon"};
}

void m2(Compra &&c)
{}

int main()
{
    cout << "\n EXEMPLO1: " << endl;
    Compra c1, c2, c3;
    cout << "\n EXEMPLO2: " << endl;
    Compra c4 {c1};
    cout << "\n EXEMPLO3: " << endl;
    c2 = m1(c1);
    cout << "\n EXEMPLO4: " << endl;
    c4 = c3 = c2;
//    m2(c4); // Erro
    cout << "\n EXEMPLO5: " << endl;
    m1({1, "José"});
//    Compra c1;
    cout << "\n EXEMPLO6: " << endl;
    m2(m1(c1));

    return 0;
}
