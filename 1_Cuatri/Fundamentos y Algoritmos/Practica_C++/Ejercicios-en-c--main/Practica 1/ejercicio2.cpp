/*2. Modifique el programa anterior para que el mensaje de salida muestre la suma de ambos
números:
a. Utilizando una variable adicional
b. Sin utilizar una variable adicional
*/
#include <iostream>
using namespace std;


/* opcion A
int main(){
    int num1, num2, resultado;
    cout<<"ingresar primer numero";
    cin>>num1;
    cout<<"ingresar segundo numero";
    cin>>num2;
    resultado = num1 + num2;
    cout<<"la suma es:  "<<resultado<<endl;
    return 0;
}
    */
//opcion b
int main(){
    int num1, num2;
    cout<<"ingresar primer numero";
    cin>>num1;
    cout<<"ingresar segundo numero";
    cin>>num2;
    cout<<"la suma es:  "<<num1 + num2<<endl;
    return 0;
}