/*Ejercicio 5. Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor
mínimo en una matriz de 4x4, indicando sus posiciones.*/
#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int max, min;
    int filaMax = 0, colMax = 0, filaMin = 0, colMin = 0;

    cout << "Ingrese los valores para la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    max = matriz[0][0];
    min = matriz[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
        }
    }


    cout << "\nMaximo: " << max << " en fila " << filaMax << ", columna " << colMax << endl;
    cout << "Minimo: " << min << " en fila " << filaMin << ", columna " << colMin << endl;

    return 0;
}
