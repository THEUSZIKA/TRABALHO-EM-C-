#include <iostream>

using namespace std;

int main() {
    const int SIZE = 4;
    int matriz1[SIZE][SIZE];
    int matriz2[SIZE][SIZE];
    int matrizMaior[SIZE][SIZE];

    // Preenchendo a primeira matriz com valores fornecidos pelo usuário
    cout << "Digite os elementos da primeira matriz 4x4:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz1[i][j];
        }
    }

    // Preenchendo a segunda matriz com valores fornecidos pelo usuário
    cout << "Digite os elementos da segunda matriz 4x4:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz2[i][j];
        }
    }

    // Preenchendo a terceira matriz com os maiores valores das mesmas posições das matrizes lidas
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrizMaior[i][j] = max(matriz1[i][j], matriz2[i][j]);
        }
    }

    // Exibindo a terceira matriz
    cout << "Matriz com os maiores valores das mesmas posições das matrizes lidas:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrizMaior[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
