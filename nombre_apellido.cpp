#include <iostream>

using namespace std;

int main()
{
     int nombre, apellido, nombreApellido = "";

    cout << "\nNombre: "; cin >> nombre;
    cout << "Apellido: "; cin >> apellido;

    nombreApellido += nombre + " " + apellido;

    cout << "\nNombre completo: " << nombreApellido << endl;

    return 0;
}
