/*Leer 10 notas y calcular el promedio. Validar que cada nota esté entre 0 y 10 antes de sumarla. 
Si no es válida, pedirla de nuevo.*/
#include <iostream>
using namespace std;

float leerNota(){
    float nota;
    do{
        cout<<"ingresar una nota entre 0 y 10"<<endl;
        cin>>nota;
    }while(!(nota >= 0 && nota <=10));
    return nota;
}

int main(){
    float suma = 0;
    float nota;
    for(int i = 1; i <= 10;i++){

        suma += leerNota();
    }
    
    cout<<"el promedio es: "<< suma / 10 << endl;
    return 0;
}