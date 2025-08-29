/*5. Realizar un programa que lea números enteros desde teclado. La lectura debe finalizar cuando se ingrese
el número 100, el cual debe procesarse. Informar en pantalla:
◦ El número máximo leído.
◦ El número mínimo leído.
◦ La suma total de los números leídos.*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num, suma = 0, min = INT_MAX, max = INT_MIN;
    do{
        cout<<"ingresar numero: ";
        cin>>num;
        suma = suma + num;
        if(num < min){
            min = num;
        }
        if(num > max){
            max = num;
        }
    }while(num != 100);
    cout<<"la suma total es: "<< suma<< endl;
    cout<<"el maximo leido es: "<< max<<endl;
    cout <<"el minimo leido es: "<< min<<endl;
    return 0;
}