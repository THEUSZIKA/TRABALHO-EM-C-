#include <iostream>

const int SIZE = 3;

// Função para calcular a matriz ao quadrado
void matrizAoQuadrado(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    int temp[SIZE][SIZE] = {0};

    // Multiplica A por A (A^2)
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < SIZE; ++k) {
                temp[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    // Copia o resultado para B
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            B[i][j] = temp[i][j];
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
    int A[SIZE][SIZE], B[SIZE][SIZE];

    // Leitura da matriz A
    std::cout << "Digite os elementos da matriz A " << SIZE << "x" << SIZE << ":" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> A[i][j];
        }
    }

    // Calcula A^2
    matrizAoQuadrado(A, B);

    // Imprime a matriz B
    imprimirMatriz(B);

    return 0;
}
