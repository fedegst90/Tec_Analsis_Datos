/* Realizar un programa que lea desde teclado la información de alumnos ingresantes a la carrera Robótica.
De cada alumno se lee nombre y nota obtenida en el módulo Introducción a la Programación (la nota es un
número entre 1 y 10). La lectura finaliza cuando se lee el nombre “Zidane Zinedine“, que debe procesarse. Al
finalizar la lectura informar:
- La cantidad de alumnos aprobados (nota 8 o mayor) y
- la cantidad de alumnos que obtuvieron un 7 como nota
*/

#include <iostream>
#include <string>
using namespace std;






int main(){
    string nombre;
    int nota;
    int aux = 1;
    int aprobadoSiete = 0;
    int aprobados = 0;
    do{
        cout<< "ingresar nombre: ";
        getline(cin, nombre); //lee toda la linea, no solo hasta el primer espacio.
        cout<<"ingresar la nota: ";
        cin>>nota;
        cin.ignore(); // limpiar el buffer para getline
        if(nota >= 8){
            aprobados++;
        }
        if(nota == 7 ){
            aprobadoSiete++ ;
        }
    }while(nombre != "Zidane Zinedine");
    cout<<"cantidad alumnos con 8 o mas: "<<aprobados<<endl;

    cout<<"cantidad de alumnos aprbados con 7: "<<aprobadoSiete<<endl;
    return 0;
}