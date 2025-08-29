/*4. Modifique el ejercicio anterior para que, luego de leer el número X, se lean a lo sumo 10 número
reales. La lectura deberá finalizar al ingresar un valor que sea el doble de X, o al leer el décimo
número, en cuyo caso deberá informarse “No se ha ingresado el doble de X”.
*/

#include <iostream>
using namespace std;
int main (){
    float num, aux, contador = 0;
    cout<<"ingresar un numero: ";
    cin>>num;
    aux = num *2;
    while(num != aux  && contador < 9){
        cout<<"ingresar otro numero:";
        cin >>num;
        contador++;
        
    }
    if(num == aux){
        cout<<" se ingreso el doble ";
    }else{
        cout<<"No se ingreso el doble de x ";
    }
    return 0;
}
