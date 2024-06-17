#include <iostream>

const int SIZE = 3; // Tamanho da matriz (3x3)

int main() {
    int matriz[SIZE][SIZE];
    int soma_colunas[SIZE] = {0};

    // Leitura da matriz
    std::cout << "Digite os elementos da matriz " << SIZE << "x" << SIZE << ":" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matriz[i][j];
        }
    }

    // Cálculo da soma das colunas
    for (int j = 0; j < SIZE; ++j) {
        for (int i = 0; i < SIZE; ++i) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    // Exibição do array com as somas das colunas
    std::cout << "\nSomas das colunas da matriz:" << std::endl;
    for (int j = 0; j < SIZE; ++j) {
        std::cout << "Coluna " << j + 1 << ": " << soma_colunas[j] << std::endl;
    }

    return 0;
}
