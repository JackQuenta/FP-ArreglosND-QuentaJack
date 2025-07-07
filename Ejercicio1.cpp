/*Ejercicio 1: Producto de Dos Matrices: Implemente un programa que multiplique dos matrices de 3x3 y
muestre el resultado, y muestre las dos matrices y su resultado en horizontal*/

#include <iostream>
using namespace std;

int main() {
    const int n = 3;
    int a[n][n], b[n][n], c[n][n] = {0};

    cout << "Ingrese los elementos de la matriz a (3x3):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    cout << "\nIngrese los elementos de la matriz b (3x3):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];

    cout << "\n  a   *   b  =  resultado:\n"; 
    for (int i = 0; i < n; i++) {
     
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\t";

       
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << "\t";

      
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

    return 0;
}

