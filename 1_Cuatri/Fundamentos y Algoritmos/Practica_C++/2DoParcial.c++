/*
Una empresa desea analizar las ventas realizadas durante el mes. Por cada venta se registra:
Día del mes (1 a 31)
Monto de la venta
Cantidad de productos vendidos
a) Leer y almacenar la información de las 250 ventas.
b) Crear un módulo que:
Calcule el monto promedio de las ventas realizadas.
Informe el día y la cantidad de productos de la venta de mayor monto*/

#include <iostream>
#include <climits>
using namespace std;

struct registroVentas
{
    int numRegistro;
    int dia;
    float montoCompra;
    float cantProducto;
};

void leerTeclado(int &dia, float &montoCompra, float &cantProducto)
{
    cout << "Ingrese dia del mes (1 a 31): ";
    cin >> dia;
    cout << "Ingrese monto de la venta: ";
    cin >> montoCompra;
    cout << "Ingrese cantidad de productos: ";
    cin >> cantProducto;
}

void imprimirPantalla(registroVentas *ventas)
{
    cout << "Numero de Registro: " << ventas->numRegistro << endl;
    cout << "Dia: " << ventas->dia << endl;
    cout << "Monto de compra: " << ventas->montoCompra << endl;
    cout << "Cantidad de Productos: " << ventas->cantProducto << endl;
}

bool validarRegistro(int dia, float montoCompra, float cantProducto)
{
    return (dia >= 1 && dia <= 31 && montoCompra > 0.0 && cantProducto > 0.0);
}

void guardaRegistro(int &numRegistro, int &dia, float &montoCompra, float &cantProducto, registroVentas *ventas)
{
    ventas->numRegistro = numRegistro;
    ventas->dia = dia;
    ventas->montoCompra = montoCompra;
    ventas->cantProducto = cantProducto;
}

void promedioVentas(int &dimLogica, float &promedio, registroVentas ventas[])
{
    if (dimLogica > 0)
    {
        int suma = 0;
        for (int i = 0; i < dimLogica; i++)
        {
            suma += ventas[i].montoCompra;
        }

        promedio = suma / dimLogica;
        cout << "El monto promedio de las ventas realizadas es: " << promedio << endl;
    }
    else
    {
        cout << "No hay registros " << endl;
    }
}

void mayorVenta(registroVentas *ventas, int registroMax)
{
    if (registroMax >= 0)
    {
        cout << "Registro con monto maximo de ventas " << endl;
        imprimirPantalla(ventas);
    }
    else
    {
        cout << "No hay registros " << endl;
    }
}

bool seguir()
{
    string continuar;
    cout << "Desea contuniar (S/N)" << endl;
    cin >> continuar;
    return (continuar == "NO" || continuar == "no");
}

int main()
{
    int dia, dimLog = 0, registroMax = 0;
    float montoCompra, cantProducto, montoMax = 0.0, promedio = 0;

    registroVentas ventas[250];

    for (int i = 1; i <= 250; i++)
    {
        leerTeclado(dia, montoCompra, cantProducto);
        if (dia == -1)
        {
            cout << "salir" << endl;
            break;
        }

        if (validarRegistro(dia, montoCompra, cantProducto))
        {
            if (montoMax < montoCompra)
            {
                montoMax = montoCompra;
                registroMax = i - 1;
            }
            guardaRegistro(i, dia, montoCompra, cantProducto, &ventas[i - 1]);
            cout << "Se registro con exito con la venta: " << endl;
            imprimirPantalla(&ventas[i - 1]);
            dimLog++;
        }
        else
        {
            cout << "No se registro la venta para el N° Registro: " << i << endl;
            continue;
        }
    }

    promedioVentas(dimLog, promedio, ventas);
    mayorVenta(&ventas[registroMax], registroMax);

    return 0;
}