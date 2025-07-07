/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para
el juego de Buscaminas en una cuadrícula de 10x10. El programa debe:
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0).
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se
cuenta la celda misma).
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado.
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no
incluyendo la propia celda.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int contarMinas(int tablero[10][10], int fila, int col) {
    int minas = 0;
    for (int i = fila - 1; i <= fila + 1; ++i) {
        for (int j = col - 1; j <= col + 1; ++j) {
            if (i >= 0 && i < 10 && j >= 0 && j < 10 && !(i == fila && j == col)) {
                minas += tablero[i][j];
            }
        }
    }
    return minas;
}

int main() {
    srand(time(0));
    int tablero[10][10];
    int numeros[10][10];

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            tablero[i][j] = rand() % 2;

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            numeros[i][j] = contarMinas(tablero, i, j);

    cout << "Tablero de Minas:\t\tTablero con Numeros:\n";
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j)
            cout << tablero[i][j] << " ";
        cout << "\t\t";
        for (int j = 0; j < 10; ++j)
            cout << numeros[i][j] << " ";
        cout << endl;
    }

    return 0;
}


