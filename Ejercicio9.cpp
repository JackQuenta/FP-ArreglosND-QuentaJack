/*Ejercicio 9. Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros n�meros naturales y cada una de las
siguientes N-1 filas contiene la rotaci�n de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4. */
#include <iostream>
using namespace std;

int main() {
    int N;
    int MAX = 100;
    cout << "Ingrese el orden del cuadrado latino (N): ";
    cin >> N;

    int cuadrado[MAX][MAX];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cuadrado[i][j] = (i + j) % N + 1;
        }
    }

    cout << "\nCuadrado latino de orden " << N << ":\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << cuadrado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


