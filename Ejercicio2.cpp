/*Ejercicio 2: Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz
de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada
ocurrencia.*/

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int a[n][n], x, buscado = 0;

    cout << "Ingrese los elementos de la matriz (3x3):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    cout << "\nIngrese el valor a buscar: ";
    cin >> x;

    cout << "\nEl valor " << x << " se encuentra en:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == x) {
                cout << "fila " << i << ", columna " << j << endl;
                buscado = 1;
            }

    if (buscado == 0)
        cout << "El valor no se encuentra en la matriz.\n";

    return 0;
}
