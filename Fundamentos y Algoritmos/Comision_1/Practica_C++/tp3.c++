#include <iostream>
#include <string>
using namespace std;

void uno()
{

    int x = 0, sum = 0, sum5 = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingresé un número entero: ";
        cin >> x;
        if (x == 5)
        {
            sum5++;
        }
        sum += x;
    }
    cout << "Se ingreso el num 5: " << sum5 << endl;
    cout << "suma total de enteros" << sum;
}

void dos()
{

    int x = 0, numMax = 0, numOrden = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingresé un número entero: ";
        cin >> x;
        if (x > numMax)
        {
            numMax = x;
            numOrden = i + 1;
        }
    }
    cout << "El mayor número ingresado fue " << numMax << endl;
    cout << "Y fue ingresado en la posición  " << numOrden;
}

void tres()
{
    string alumno;
    int nota = 0, notaOcho = 0, notaSiete = 0;

    while (true)
    {
        cout << "Ingrese nombre del alumno: ";
        cin >> alumno;

        if (alumno == "zidane")
        {
            break;
        }
        cout << "Ingrese nota del alumno" << endl;
        cin >> nota;

        if (nota >= 8)
        {
            notaOcho++;
        }
        else if (nota == 7)
        {
            notaSiete++;
        }
    }

    cout << "Alumnos con >= 8: " << notaOcho << endl;
    cout << "Alumnos con 7: " << notaSiete << endl;
}

int main()
{
    //uno();
    //dos();
    tres();
    return 0;
}