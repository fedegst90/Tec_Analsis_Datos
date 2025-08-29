#include <iostream>

using namespace std;

int main()
{
    /*/
    int dni = 0, maxDni = 0, countEmpleados = 0;
    float sueldo = 0.0, maxSueldo = 0.0;

    for (int i = 0; i < 50; i++)
    {
        cout << "Ingrese el DNI del empleado " << (i + 1) << ": ";
        cin >> dni;
        cout << "Ingrese el sueldo del empleado " << (i + 1) << ": ";
        cin >> sueldo;
        if (sueldo > maxSueldo)
        {
            maxSueldo = sueldo;
            maxDni = dni;
        }

        if (sueldo > 200000 && dni % 2 != 0)
        {
            countEmpleados++;
        }
    }

    cout << "El empleado con mayor sueldo tiene DNI: " << maxDni << endl;
    cout << "Y su sueldo es: " << maxSueldo << endl;
    cout << "Cantidad de empleados con sueldo mayor de 200000 y tienen DNI impar: " << countEmpleados << endl;
*/
int x = 15;
bool cond = (x >= 10 && x <= 20);
cout << "La variable x es: " << cond << endl;
    return 0;
}