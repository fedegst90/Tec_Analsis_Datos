/*2. Realice un programa que lea 10 números e informe cuál fue el mayor número leído. Por ejemplo, si se lee
la secuencia:
3 5 6 2 3 10 98 8 -12 9 deberá informar:
“El mayor número leído fue el 98”*/
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num, max = INT_MIN, aux;
    for(int i = 1; i <= 10; i++){
        cout<<"ingrese un numero: ";
        cin>>num;
        if(num > max){
            max = num;
            aux = i;
        }
    }
    cout<<"el mayor numero leido es : "<<max<<"en la posicion: "<<aux<<endl;
    return 0;
}