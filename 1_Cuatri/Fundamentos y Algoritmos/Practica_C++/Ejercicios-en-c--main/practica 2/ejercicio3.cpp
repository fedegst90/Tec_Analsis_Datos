/*3. Realizar un programa que lea un número real X. Luego, deberá leer números reales hasta que se
ingrese uno cuyo valor sea exactamente el doble de X (el primer número leído)*/

#include <iostream>
using namespace std;

int main(){
    float num, aux;
    cout<<"ingresar un numero: ";
    cin>>num;
    aux = num *2;
    while(num != aux ){
        cout<<"ingresar otro numero:";
        cin >>num;
    }
    return 0;

}