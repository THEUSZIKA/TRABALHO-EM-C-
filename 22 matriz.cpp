#include <iostream>

const int SIZE = 3;

// Função para calcular o produto de duas matrizes
void produtoMatrizes(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            C[i][j] = 0; // Inicializa C[i][j] com zero

            for (int k = 0; k < SIZE; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[SIZE][SIZE]) {
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    // Leitura da matriz A
    std::cout << "Digite os elementos da matriz A " << SIZE << "x" << SIZE << ":" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> A[i][j];
        }
    }

    // Leitura da matriz B
    std::cout << "Digite os elementos da matriz B " << SIZE << "x" << SIZE << ":" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> B[i][j];
        }
    }

    // Calcula o produto de A e B
    produtoMatrizes(A, B, C);

    // Imprime a matriz resultante C
    imprimirMatriz(C);

    return 0;
}
