/*3. Implemente un programa que lea el diámetro D de un círculo e imprima:
a. El radio (R) del círculo (la mitad del diámetro)
b. El área del círculo. Para calcular el área de un círculo debe utilizar la fórmula PI x R
2
c. El perímetro del círculo. Para calcular el perímetro del círculo debe utilizar la fórmula D*PI (o
también PI*R*2)*/

#include <iostream>
using namespace std;

int main(){
    float diametro, radio, area, perimetro;
    cout<<"ingrese el diametro: ";
    cin>> diametro;
    radio= diametro / 2;
    area = 3.14 * (radio * radio);
    perimetro = diametro * 3.14;
    cout<<"el radio es: "<< radio <<endl;
    cout<<"el area es: "<< area <<endl;
    cout<<"el perimetro es: "<< perimetro <<endl;
    return 0;
}
