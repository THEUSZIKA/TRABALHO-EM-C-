#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int matriz[SIZE][SIZE];

    // Preenchendo a matriz com o produto da linha pelo índice da coluna
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matriz[i][j] = i * j;
        }
    }

    // Exibindo a matriz
    cout << "Matriz com o produto da linha pelo índice da coluna:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
