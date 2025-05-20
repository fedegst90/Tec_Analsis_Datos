#include <iostream>
#include <string>
using namespace std;

void uno()
{
    int n1 = 0, n2 = 0;
    cout << "Ingrese 1er numero: ";
    cin >> n1;

    cout << "Ingrese 2do numero: ";
    cin >> n2;

    if (n1 < n2)
    {
        cout << "2do numero es mayor";
    }
    else if (n1 > n2)
    {
        cout << "1er numero es mayor";
    }
    else
    {
        cout << "Ambos numeros son iguales";
    }
}

void dos()
{
    int n1 = 0, n2 = 0, n3 = 0;
    cout << "Ingrese 1er numero: " << endl;
    cin >> n1;

    cout << "Ingrese 2do numero: " << endl;
    cin >> n2;

    cout << "Ingrese 3er numero: " << endl;
    cin >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        if (n2 >= n3)
        {
            cout << n1 << " " << n2 << " " << n3;
        }
        else
        {
            cout << n1 << " " << n3 << " " << n2;
        }
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        if (n1 >= n3)
        {
            cout << n2 << " " << n1 << " " << n3;
        }
        else
        {
            cout << n2 << " " << n3 << " " << n1;
        }
    }
    else
    {
        if (n1 >= n2)
        {
            cout << n3 << " " << n1 << " " << n2;
        }
        else
        {
            cout << n3 << " " << n2 << " " << n1;
        }
    }
}

void tres()
{
    float primer = 0.0, n = 0.0;
    cout << "Ingrese un numero: " << endl;
    cin >> primer;

    while (true)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        if (n == primer * 2)
        {
            break;
        }
    }
}

void cuatro()
{
    int i=1;
    float primer = 0.0, n = 0.0;
    cout << "Ingrese un numero: " << endl;
    cin >> primer;

    while (i<10)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        if (n == primer * 2)
        {
            break;
        }
        if (i==9)
        {
            cout << "No se ha ingresado el doble de X" << endl;
        }
        
        i++;
    }
}

cinco(){
    
}

int main()
{
    // uno();
    // dos();
    //tres();
    //cuatro();
    return 0;
}