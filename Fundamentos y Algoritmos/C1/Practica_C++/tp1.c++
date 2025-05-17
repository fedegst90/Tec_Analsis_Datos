#include <iostream>
#include <string>
using namespace std;

void uno()
{
    int n1 = 0, n2 = 0;
    cout << "Ingrese 1er numero: ";
    cin >> n1;

    cout << "Ingrese 2er numero: ";
    cin >> n2;

    cout << "Ingresaron los valores: " << n2 << " , " << n1;
}

void dos()
{
    int n1 = 0, n2 = 0, sum = 0;
    ;
    cout << "Ingrese 1er numero: ";
    cin >> n1;

    cout << "Ingrese 2er numero: ";
    cin >> n2;
    sum = n1 + n2;
    cout << "a) " << sum << " , b) " << n1 + n2;
}

void tres()
{
    float d = 0.0, r = 0.0, pi = 3.1416;

    cout << "Ingrese el diametro del circulo" << endl;
    cin >> d;
    r = d;

    cout << "a) " << r << " , b) " << pi * r * r << " , c) " << pi * d;
}

void cuatro()
{
    int valorDolar = 1200, montoIngreso = 0;
    float comision = 1.04, total = 0.0;
    cout << "Ingrese el monto de la transaccion" << endl;
    cin >> montoIngreso;
    total = montoIngreso * valorDolar * comision;
    cout << "La transaccion sera de " << total << " pesos argentinos";
}

int main()
{

    // uno();
    // dos();
    // tres();
    cuatro();

    return 0;
}
