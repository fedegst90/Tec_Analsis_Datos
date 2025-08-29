/*1. Realizar un programa que lea 2 números enteros desde teclado e informe en pantalla cuál de los
dos números es el mayor. Si son iguales debe informar en pantalla lo siguiente: “Los números leídos
son iguales”
*/

#include <iostream>
using namespace std;



int main() {
    int num1, num2;
    cout <<"ingrese el primer numero:";
    cin>> num1;
    cout<< "ingrese el segundo numero: ";
    cin>>num2;
    if (num1 > num2) {
        cout<< "el numero mayor es: " <<num1<<endl;
    } else if (num2 > num1) {
        cout <<"el numero mayor es:  "<<num2 << endl;
    } else {
        cout<<"los numeros leidos son iguales"<<endl;
    }
    return 0;
}