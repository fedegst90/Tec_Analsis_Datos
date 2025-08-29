/*4. Realizar un programa que lea 1000 números enteros desde teclado. Informar en pantalla cuáles son los
dos números mínimos leídos.
a. Modifique el ejercicio anterior para que, en vez de leer 1000 números, la lectura finalice al leer el
número 0, el cual debe procesarse.
b. Modifique el ejercicio anterior para que, en vez de leer 1000 números, la lectura finalice al leer el
número 0, el cual no debe procesarse.
*/
#include <iostream>
#include <climits>//a traves de esta inclusion podemos acceder a los limites de los numeros
using namespace std;
int main(){
    int num, min1 = INT_MAX, min2 = INT_MAX;//con la inclusion anterior, podemos poner el maximo posible con int_max
    for(int i = 1; i <= 10; i++){
        cout<<"ingresar numero: ";
        cin>>num;
        if(num < min1){
            min2 = min1;
            min1 = num;
        }else if(num < min2){
            min2 = num;
        }
    }
    cout<<"los valores minimos leidos son "<<min1<<" y "<<min2<<endl;
    return 0;
}

/*
A.
do{
    cout<<"ingresar numero: ";
    cin>>num;
    if(num < min1){
        min2 = min1;
        min1 = num;
    }else if(num < min2){
        min2 = num;
    }
}while(num != 0)*/

/*
B
cout<<"ingresar numero: ";
cin>>num;
while(num != 0){
    if(num < min1){
        min2 = min1;
        min1 = num;
    }else if(num < min2){
        min2 = num;
    }
    cout<<"ingresar numero: ";
    cin>>num;
}
*/