/*5. Realizar un programa que lea el número de legajo y el promedio de cada alumno de la facultad.
La lectura finaliza cuando se ingresa el legajo -1, que no debe procesarse. Al finalizar la lectura,
informar:
a. La cantidad de alumnos leída
b. La cantidad de alumnos cuyo promedio supera 6.5
c. El porcentaje de alumnos destacados (alumnos con promedio mayor a 8.5) cuyo legajo sean
menor al valor 2500.*/
#include <iostream>
using namespace std;

int main (){
    int legajo, cantidadTotal = 0, cantidadProm65 = 0;
    float promedio, porcentajeDestacados, cantProm85=0;
    cout<<"ingrese un legajo";
    cin>>legajo;
    
    while(legajo != -1){
        cout<<"ingrese promedio:";
        cin>>promedio;
        cantidadTotal++;
        if(promedio >= 6.5){
            cantidadProm65++;
        }
        if(promedio >= 8.5 && legajo < 2500){
            cantProm85++;
        }
        cout<<"ingrese un legajo";
        cin>>legajo;
    }
    porcentajeDestacados = cantProm85 * 100 / cantidadTotal;

    cout<<"la cantidad de alumnos total: "<<cantidadTotal<<endl;
    cout<<"la cantidad de alumnos con promedio mayos a 6.5 es : "<< cantidadProm65<<endl;
    cout<<"el porcentaje de alumnos con promedio mayor a 8.5 y legajo menor a 2500: "<<porcentajeDestacados<<endl;
    return 0;

}