#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int matriz[SIZE][SIZE];

    // Preenchendo a matriz de acordo com as condições dadas
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (i < j) {
                matriz[i][j] = 2*i + 7*j;
            } else if (i == j) {
                matriz[i][j] = 3*i*i + 1;
            } else { // i > j
                matriz[i][j] = 4*i*i*i + 5*j*j + 1;
            }
        }
    }

    // Exibindo a matriz gerada
    cout << "Matriz gerada:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
