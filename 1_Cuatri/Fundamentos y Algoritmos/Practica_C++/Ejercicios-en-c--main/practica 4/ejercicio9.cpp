/*9. Realizar una solución modularizada del siguiente ejercicio: Realizar un programa que lea información de
200 productos de un supermercado. De cada producto se lee código y precio. Informar en pantalla:
- Los códigos de los dos productos más baratos.
- La cantidad de productos de más de 16 pesos con código par.*/
#include <iostream>
#include <climits>
using namespace std;
void leerProducto(int &cod, float &precio){
    cout<<"ingrese codigo de producto: ";
    cin>>cod;
    cout<<"ingrese precio del producto: ";
    cin>>precio;
}
bool validarProducto(int cod, float p){
    return (p > 16 && (cod % 2 == 0));
}

int main(){
    int codigo, contador = 0, codmin1 = 0, codmin2 = 0;
    float precio, preciomin1 = INT_MAX, preciomin2 = INT_MAX;
    for(int i = 1; i <= 200; i++){
        leerProducto(codigo, precio);
        if(precio < preciomin1){
            preciomin2 = preciomin1;
            codmin2 = codmin1;
            preciomin1 = precio;
            codmin1 = codigo;
        }else if(precio < preciomin2){
            preciomin2 = precio;
            codmin2 = codigo;
        }
        if(validarProducto(codigo, precio)){
            contador++;
        }
    }
    cout<<"los productos con codigo par y con precio mayor a 16 es: "<<contador<<endl;
    cout<<"los codigos con menor precio son: "<<codmin1<<" y "<<codmin2<<endl;
    return 0;
}

