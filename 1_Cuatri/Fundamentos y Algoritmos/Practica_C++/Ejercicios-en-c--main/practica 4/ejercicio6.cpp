/*.
a. Realice un módulo que reciba un par de números (numA,numB) y retorne si numB es el doble de numA.
b. Utilizando el módulo realizado en el inciso a., realice un programa que lea secuencias de pares de números
hasta encontrar el par (0,0), e informe la cantidad total de pares de números leídos, y la cantidad de pares en
las que numB es el doble de numA.
Por ejemplo, si se lee la siguiente secuencia: (1,2) (3,4) (9,3) (7,14) (0,0) el programa debe informar los
valores 4 (cantidad de pares leídos) y 2 (cantidad de pares en los que numB es el doble de numA).
*/

#include <iostream>
using namespace std;

bool esDoble(int a, int b){
    return b == (a * 2);
}

int main(){
    int numA, numB, totalPares = 0, totalparesdoble = 0;
    cout<<"ingrese primer numero: ";
    cin >> numA;
    cout<<"ingrese segundo numero: ";
    cin >> numB;
    while(numA != 0 && numB!= 0){
        totalPares++;
        if(esDoble(numA, numB)){
            totalparesdoble++;
        }
        cout<<"ingrese primer numero: ";
        cin >> numA;
        cout<<"ingrese segundo numero: ";
        cin >> numB;
    }
    cout<<"lo totalidad de pares leidos es: "<< totalPares<<endl;
    cout<<"la cantidad de pares donde el numero b es doble de A es: "<<totalparesdoble<<endl;
    return 0;
}