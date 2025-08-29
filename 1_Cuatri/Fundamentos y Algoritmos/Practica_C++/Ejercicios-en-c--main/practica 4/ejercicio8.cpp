/*8. Realizar un programa que lea secuencia de números enteros. La lectura finaliza cuando llega el número
123456, el cual no debe procesarse. Informar en pantalla para cada número la suma de sus dígitos pares y la
suma de sus dígitos impares.
*/
#include<iostream>
using namespace std;

void descomponer(int num, int &par, int &impar){
    int digito;
    while (num != 0){
        digito = num % 10;
        if(digito % 2 == 0){
            par+=digito;
        }else{
            impar+=digito;
        }
        num = num / 10;
    }
}

int main(){
    int num, par, impar;
    cout<<"ingresar un numero: ";
    cin>>num;
    while(num != 123456){
        par = 0;
        impar = 0;
        descomponer(num, par, impar);
        cout<<"la suma de los digitos pares es: "<<par<< endl;
        cout<<"la suma de los digitos impares: "<<impar<<endl;
        cout<<"ingresar un numero: ";
        cin>>num;
    }
    return 0;
}