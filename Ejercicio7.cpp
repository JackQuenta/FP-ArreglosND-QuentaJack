/*Ejercicio 7. Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz
de 4x4, representando una imagen, 90 grados en sentido horario.*/
#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], rotada[4][4];

    cout << "Ingrese los valores de la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz original:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            rotada[j][3 - i] = matriz[i][j];
        }
    }

    cout << "\nMatriz rotada 90 grados en sentido horario:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << rotada[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

