/*1. Realizar un programa que lea 10 números enteros e informe la suma total de los números leídos.
a. Modifique el ejercicio 1 para que además informe la cantidad de números mayores a 5
*/

#include <iostream>
using namespace std;

int main (){
    int num, suma = 0, mayoresA5 = 0;
    for(int i = 1; i <= 10; i++){
        cout<<"ingrese un numero: ";
        cin>>num;
        suma+=num;
        if(num > 5){
            mayoresA5++;
        }
    }
    cout<<"la suma total es: "<<suma<<endl;
    cout<<"la cantidad de numeros mayores a 5 es: "<< mayoresA5<<endl;
    return 0;
}