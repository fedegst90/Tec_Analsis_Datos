/*7. Realizar un módulo que reciba como parámetro un número entero y retorne la cantidad de dígitos que
posee y la suma de los mismos. a. Utilizando el módulo anterior, realizar un programa que lea una secuencia
de números e imprima la cantidad total de dígitos leídos. La lectura finaliza al leer un número cuyos dígitos
suman exactamente 10, el cual debe procesarse.
*/

#include <iostream>
using namespace std;
void descomponerYsumar(int n, int &cantD, int &suma){
    int aux;
    suma = 0;
    cantD=0;
    while(n!=0){
        aux = n % 10;
        cantD++;
        suma+=aux;
        n = n / 10;
    }
}

int main(){
    int numero, auxD, sum, cantTotal = 0;
    do{
        cout<<"ingrese un numero: ";
        cin>>numero;
        descomponerYsumar(numero, auxD,sum);
        cantTotal+=auxD;
    }while(sum != 10);

    cout<<"la cantidad de digitos leidos es: "<<cantTotal<<endl;
    return 0;
}