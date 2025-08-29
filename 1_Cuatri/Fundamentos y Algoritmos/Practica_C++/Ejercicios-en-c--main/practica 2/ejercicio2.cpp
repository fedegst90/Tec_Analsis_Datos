/*2. Realizar un programa que lea 3 números enteros y los imprima en orden descendente. Por
ejemplo, si se ingresan los valores 4, -10 y 12, deberá imprimir:
12 4 -10
*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"ingresar 3 numeros enteros: "; 
    cin>>num1;                             
    cin>>num2;             
    cin>>num3;
    if(num1 > num2 && num1 > num3){
        if(num2 > num3){
            cout<<num1 <<" "<< num2<<" "<< num3;
        }else{
            cout<< num1 << num3 << num2;
        }
    }else if(num2 > num1 && num2 > num3){
        if(num1 > num3){
            cout<<num2<<num1<<num3;
        }else{
            cout<<num2<< num3<<num1;
        }
    }else {
        if(num1 > num2){
            cout<<num3<< num1<< num2;
        }else{
            cout<<num3<<num2<<num1;
        }
    }
    return 0;
}