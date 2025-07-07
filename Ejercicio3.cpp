/*Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado.*/
#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int diagoPrinc = 0, diagoSecun = 0;

    cout << "Ingrese los elementos de la matriz (4x4):\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    for (int i = 0; i < 4; i++) {
        diagoPrinc += a[i][i];             
        diagoSecun += a[i][3 - i];    
    }

    cout << "\nSuma de la diagonal principal: " << diagoPrinc << endl;
    cout << "Suma de la diagonal secundaria: " << diagoSecun << endl;
    cout << "Suma total de ambas diagonales: " << diagoPrinc + diagoSecun << endl;

    return 0;
}
