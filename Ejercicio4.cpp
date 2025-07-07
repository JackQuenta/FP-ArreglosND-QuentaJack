/*Ejercicio 4. Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante.*/

#include <iostream>
using namespace std;

int main() {
    int a[4][4], fila1, fila2;

    cout << "Ingrese los elementos de la matriz (4x4):\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    do {
        cout << "\nIngrese la primera fila a intercambiar (0 a 3): ";
        cin >> fila1;
    } while (fila1 < 0 || fila1 > 3);

    do {
        cout << "Ingrese la segunda fila a intercambiar (0 a 3): ";
        cin >> fila2;
    } while (fila2 < 0 || fila2 > 3 || fila2 == fila1);

    for (int j = 0; j < 4; j++) {
        int temp = a[fila1][j];
        a[fila1][j] = a[fila2][j];
        a[fila2][j] = temp;
    }

    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
