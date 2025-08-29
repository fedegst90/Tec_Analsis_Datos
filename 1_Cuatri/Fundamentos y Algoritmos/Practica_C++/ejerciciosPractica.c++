#include <iostream>

using namespace std;

/*
Realizar un programa que lea un número entero y determine si es positivo, negativo o cero.
Utilizar una función void analizarNumero(int n) que realice esa tarea.

*/

void analizarNumero(int n)
{
    if (n > 0)
    {
        cout << "El número es positivo" << endl;
    }
    else if (n < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es cero" << endl;
    }
}

int main()
{
    int n = 0;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    analizarNumero(n);

    return 0;
}