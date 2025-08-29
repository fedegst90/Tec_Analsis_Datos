/*4. Realice un programa que informe el valor total en pesos de una transacción en dólares. Para ello,
el programa debe leer el monto total en dólares de la transacción, el valor del dólar al día de la fecha
y el porcentaje (en pesos) de la comisión que cobra el banco por la transacción. Por ejemplo, si la
transacción se realiza por 10 dólares, el dólar tiene un valor 1200 pesos y el banco cobra un 4% de
comisión, entonces el programa deberá informar:
La transacción será de 12480 pesos argentinos
(resultado de multiplicar 10*1200 y adicionarle el 4%)*/

#include <iostream>
using namespace std;

int main(){
    float monto, valorDolar, comision, valorTotal, porComision;
    cout<<"ingrese el monto: ";
    cin>>monto;
    cout<<"ingrese el valor del dolar en el dia de hoy: ";
    cin>>valorDolar;
    cout<<"ingrese el porcentaje de la comision: ";
    cin>>porComision;
    valorTotal = monto * valorDolar;
    comision = valorTotal * (porComision / 100);
    valorTotal+= comision;

    cout<<"la transaccion sera de "<< valorTotal<<" pesos argentinos"<<endl;

    
    return 0;
}