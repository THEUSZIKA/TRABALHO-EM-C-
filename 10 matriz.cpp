#include <iostream>

using namespace std;

int main() {
    const int SIZE = 3;
    int matriz[SIZE][SIZE];

    // Preenchendo a matriz com valores fornecidos pelo usuário
    cout << "Digite os elementos da matriz 3x3:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Calculando a soma dos elementos da diagonal principal
    int soma = 0;
    for (int i = 0; i < SIZE; ++i) {
        soma += matriz[i][i];
    }

    // Exibindo a matriz
    cout << "Matriz inserida:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Exibindo a soma dos elementos da diagonal principal
    cout << "Soma dos elementos da diagonal principal: " << soma << endl;

    return 0;
}
