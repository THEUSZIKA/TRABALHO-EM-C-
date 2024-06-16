#include <iostream>

using namespace std;

int main() {
    const int SIZE = 4;
    int matriz[SIZE][SIZE];
    int count = 0;

    // Lendo os elementos da matriz
    cout << "Digite os elementos da matriz 4x4:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Contando os elementos maiores que 10
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matriz[i][j] > 10) {
                ++count;
            }
        }
    }

    // Exibindo o número de elementos maiores que 10
    cout << "Número de elementos maiores que 10: " << count << endl;

    return 0;
}
