#include <iostream>
using namespace std;

int main(){
    int nro, cant = 0;
    cout<<"ingresar numero: ";
    cin>>nro;
    while(nro!=0){
        if(nro>5){
            cant++;
        }
        cout<<"ingresar numero: ";
        cin>>nro;
    }
    cout << "Cantidad de numeros mayores que 5: " << cant << endl;
    return 0;
}

res = res + nro;
    
