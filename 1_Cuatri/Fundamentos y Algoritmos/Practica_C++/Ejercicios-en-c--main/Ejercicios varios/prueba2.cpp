#include <iostream>
using namespace std;

void descomponer(int num, int &cantP, int &cantI) {
    int dig;
    cantP = 0;
    cantI = 0;

    while (num != 0) {
        dig = num % 10;
        if ((dig % 2) == 0)
            cantP++;
        else
            cantI++;
        num = num / 10;
    }
}

int main() {
    int  num, pares, impares;
    int cant = 0;

    for (int i = 1; i <= 4; i++) {
        cout << "Ingresa el numero " << i << ": ";
        cin >> num;
        descomponer(num, pares, impares);
        cout <<" la cantidad de digitos pares es: "<< pares<<endl;
        cout <<"la cantidad de digitos impares es: "<< impares<<endl;
        if (pares > impares) {
            cant++;
        }
    }

    cout << "La cantidad de numeros que tienen mas digitos pares que impares es: " << cant << endl;
    return 0;
}
