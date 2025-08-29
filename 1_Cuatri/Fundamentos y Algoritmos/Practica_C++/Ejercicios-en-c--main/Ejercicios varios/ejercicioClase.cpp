/*Realizar un programa que lea un número entero y determine si es positivo, negativo o cero. 
Utilizar una función void analizarNumero(int n) que realice esa tarea.*/

#include <iostream>
using namespace std;

void analizarNumero(int n){
    if(n < 0){
        cout<<"el numero es negativo"<<endl;
    }else if(n > 0){
        cout<<"el numero es positivo"<<endl;
    }else{
        cout<<" el numero es cero" <<endl;
    }
}

int main() {
	int numero;
    cout<<"ingresar un numero: ";
    cin>>numero;
    analizarNumero(numero);
    return 0;
}