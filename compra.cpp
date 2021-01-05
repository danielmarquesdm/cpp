#include "compra.h"

#include <iostream>

using namespace std;

Compra::Compra()
{
    cout << "ctor" << endl;
}

Compra::Compra(unsigned idCliente, string nome) : _idCliente(idCliente), _nome(nome)
{
    cout << "ctor" << endl;
}

Compra::Compra(const Compra &c) : _idCliente(c._idCliente), _nome(c._nome)
{
    cout << "cctor" << endl;
}

Compra::Compra(Compra &&c) : _idCliente(c._idCliente), _nome(c._nome)
{
    cout << "mctor" << endl;
}

Compra &Compra::operator=(const Compra &compra)
{
    _idCliente = compra._idCliente;
    _nome = compra._nome;
    cout << "CA" << endl;
}

Compra &Compra::operator=(Compra &&c)
{
    _idCliente = c._idCliente;
    _nome = c._nome;
    c._idCliente = 0;
    c._nome = "";
    cout << "MA" << endl;
    return *this;
}

Compra::~Compra()
{
    cout << "dtor" << endl;
}

