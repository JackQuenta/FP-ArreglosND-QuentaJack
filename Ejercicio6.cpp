/*Ejercicio 6. Reflejar una Imagen: Implemente un programa que refleje horizontalmente una imagen
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para
obtener la imagen reflejada.*/
#include <iostream>
using namespace std;

int main() {
    int matriz[6][6];

    cout << "Ingrese los valores de la matriz 6x6:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz original:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][5 - j];
            matriz[i][5 - j] = temp;
        }
    }

    cout << "\nMatriz reflejada horizontalmente:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
