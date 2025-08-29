/*1. Implemente un programa que lea por teclado dos números enteros e imprima en pantalla los
valores leídos en orden inverso. Por ejemplo, si se ingresan los números 4 y 8, debe mostrar el
mensaje: Se ingresaron los valores 8 y 4
*/

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"ingresar primer numero";
    cin>>num1;
    cout<<"ingresar segundo numero";
    cin>>num2;
    cout<<"se ingresaron los valores "<<num2<<" y "<<num1<<endl;
    return 0;
}