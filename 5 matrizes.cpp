#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int matriz[SIZE][SIZE];
    int valorX;
    bool encontrado = false;
    int linhaEncontrado = -1, colunaEncontrado = -1;

    // Preenchendo a matriz com valores fornecidos pelo usuário
    cout << "Digite os elementos da matriz 5x5:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Lendo o valor X a ser buscado na matriz
    cout << "Digite o valor que deseja buscar na matriz: ";
    cin >> valorX;

    // Buscando o valor X na matriz
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matriz[i][j] == valorX) {
                encontrado = true;
                linhaEncontrado = i;
                colunaEncontrado = j;
                break;  // Sai do loop interno assim que encontrar o valor
            }
        }
        if (encontrado) {
            break;  // Sai do loop externo se o valor já foi encontrado
        }
    }

    // Verificando se o valor foi encontrado e exibindo o resultado
    if (encontrado) {
        cout << "O valor " << valorX << " foi encontrado na posição (linha, coluna): (" 
             << linhaEncontrado << ", " << colunaEncontrado << ")" << endl;
    } else {
        cout << "O valor " << valorX << " não foi encontrado na matriz." << endl;
    }

    return 0;
}
