#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int matriz[SIZE][SIZE];

    // Preenchendo a matriz com 1 na diagonal principal e 0 nos demais elementos
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (i == j) {
                matriz[i][j] = 1;  // Diagonal principal
            } else {
                matriz[i][j] = 0;  // Demais elementos
            }
        }
    }

    // Exibindo a matriz obtida
    cout << "Matriz obtida:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
