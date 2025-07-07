/*Ejercicio 8. Espiral de Matriz: Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5
en orden espiral. El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar
en sentido horario, imprimiendo los elementos en el orden en que se encuentran siguiendo un camino
espiral.*/
#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];

    cout << "Ingrese los valores de la matriz 5x5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nRecorrido en espiral:\n";
    int inicioFila = 0, finFila = 4;
    int inicioCol = 0, finCol = 4;

    while (inicioFila <= finFila && inicioCol <= finCol) {
        for (int j = inicioCol; j <= finCol; j++)
            cout << matriz[inicioFila][j] << " ";
        inicioFila++;

        for (int i = inicioFila; i <= finFila; i++)
            cout << matriz[i][finCol] << " ";
        finCol--;

        if (inicioFila <= finFila) {
            for (int j = finCol; j >= inicioCol; j--)
                cout << matriz[finFila][j] << " ";
            finFila--;
        }

        if (inicioCol <= finCol) {
            for (int i = finFila; i >= inicioFila; i--)
                cout << matriz[i][inicioCol] << " ";
            inicioCol++;
        }
    }

    cout << endl;
    return 0;
}

