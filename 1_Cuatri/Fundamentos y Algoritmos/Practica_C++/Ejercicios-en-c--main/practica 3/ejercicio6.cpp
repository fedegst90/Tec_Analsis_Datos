/*6. Realizar un programa que lea desde teclado información de autos de carrera. Para cada uno de los autos
se lee el nombre del piloto y el tiempo total que le tomó finalizar la carrera. En la carrera participaron 100
autos. Informar en pantalla:
- Los nombres de los dos pilotos que finalizaron en los dos primeros puestos.
- Los nombres de los dos pilotos que finalizaron en los dos últimos puestos.*/
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(){
    string nombre, nmax1, nmax2, nmin1, nmin2;
    float tiempo, tmax1 = INT_MIN, tmax2 = INT_MIN, tmin1 = INT_MAX, tmin2 = INT_MAX;
    for(int i = 1; i <= 100;i++){
        cout<<"ingrese nombre del piloto: ";
        cin>>nombre;
        cout<<"ingrese el tiempo total que le tomo finalizar la carrera";
        cin >> tiempo;
        if(tiempo > tmax1){
            tmax2 = tmax1;
            nmax2 = nmax1;
            tmax1 = tiempo;
            nmax1 = nombre;
        }else if(tiempo > tmax2){
            tmax2 = tiempo;
            nmax2 = nombre;
        }
        if(tiempo < tmin1){
            tmin2 = tmin1;
            nmin2 = nmin1;
            tmin1 = tiempo;
            nmin1 = nombre;
        }else if(tiempo < tmin2){
            tmin2 = tiempo;
            nmin2 = nombre;
        }

    }
    cout<<"los dos mejores tiempos fueron de: "<<nmax1<<" seguido de "<< nmax2<< endl;
    cout<<"los dos peores tiempos fueron de: "<<nmin1<< " seguido de "<<nmin2<<endl;
    return 0;
}