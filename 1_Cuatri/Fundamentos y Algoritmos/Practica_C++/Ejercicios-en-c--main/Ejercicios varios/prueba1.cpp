#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"ingresar un numero: ";
    cin>>numero;
    while(numero != 0){
        if((numero % 2) == 0){
            cout<< " es par"<<endl;
        }else{
            cout<< " es impar"<<endl;
        }
        cout<<"ingresar otro numero: ";
        cin>>numero;
    }
    
    return 0;
}