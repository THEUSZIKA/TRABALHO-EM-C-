#include <iostream>

using namespace std;

int main() {
    const int SIZE = 4;
    int matriz[SIZE][SIZE];

    // Preenchendo a matriz com valores fornecidos pelo usuário
    cout << "Digite os elementos da matriz 4x4:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Exibindo a matriz
    cout << "Matriz inserida:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Encontrando a localização do maior valor
    int maiorValor = matriz[0][0];
    int linhaMaior, colunaMaior;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Exibindo a localização do maior valor
    cout << "O maior valor encontrado na matriz é " << maiorValor << ", na posição (linha, coluna): (" 
         << linhaMaior << ", " << colunaMaior << ")" << endl;

    return 0;
}
