#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    bool b = true;
    while (b)
    {
        cout << "Ingrese un numero: ";
        cin >> n;
        if (n == 0)
        {
            break;
        }

        if (n % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "El no numero es par" << endl;
        }
    }

    return 0;
}