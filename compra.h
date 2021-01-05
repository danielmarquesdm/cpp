#ifndef COMPRA_H
#define COMPRA_H

#include <string>
using namespace std;

class Compra
{
public:
    Compra();
    Compra(unsigned idCliente, string nome);
    Compra(const Compra &c);
    Compra(Compra &&c);
    Compra &operator=(const Compra &compra);
    Compra &operator=(Compra &&c);
    ~Compra();
private:
    unsigned _idCliente;
    string _nome;
};

#endif // COMPRA_H
