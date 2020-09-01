//Gestión dinámica de la memoria

//Ejemplo estático

#include <iostream>

using namespace std;

int main() {
    int datos[100];  /* Espacioa Array para 100 números */
    int cantidad;    /* Cantidad de datos a introducir */
    int i;           /* iteración */
    long suma = 0;   /* Resultado de la suma */

    do {
        cout<<"Introduzca numero de datos a sumar: ";
        cin >> cantidad;
        if (cantidad > 100)  /* Solo puede ser 100 o menos */
            cout<<"Demasiados datos. Solo se puede hasta 100."<<endl;
    } while (cantidad > 100);  /* Si pide demasiado, no le dejamos */

    /* Pedimos y almacenamos los datos */
    for (i = 0; i < cantidad; i++) {
        cout<<"Introduzca el dato numero "<<i + 1<<": ";
        cin >> datos[i];
    }

    /* Calculamos la suma */
    for (i = 0; i < cantidad; i++)
        suma += datos[i];

    cout<<"La suma es: "<<suma;

    return 0;
}