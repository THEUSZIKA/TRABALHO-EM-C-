#include <iostream>
#include <cstdlib> // Para srand e rand
#include <ctime>   // Para time

const int TAMANHO = 4;

// Função para gerar um número aleatório no intervalo [min, max]
int numeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Inicializa a semente para gerar números aleatórios
    srand(time(0));

    // Declaração da matriz 4x4 e da matriz triangular inferior
    int matriz[TAMANHO][TAMANHO];
    int matrizTriangular[TAMANHO][TAMANHO] = {0};

    // Preenche a matriz 4x4 com valores aleatórios no intervalo [1, 20]
    for (int i = 0; i < TAMANHO; ++i) {
        for (int j = 0; j < TAMANHO; ++j) {
            matriz[i][j] = numeroAleatorio(1, 20);
        }
    }

    // Copia os valores da matriz original para a matriz triangular inferior
    for (int i = 0; i < TAMANHO; ++i) {
        for (int j = 0; j <= i; ++j) {
            matrizTriangular[i][j] = matriz[i][j];
        }
    }

    // Imprime a matriz original
    std::cout << "Matriz Original:" << std::endl;
    for (int i = 0; i < TAMANHO; ++i) {
        for (int j = 0; j < TAMANHO; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Imprime a matriz triangular inferior
    std::cout << "Matriz Transformada (Triangular Inferior):" << std::endl;
    for (int i = 0; i < TAMANHO; ++i) {
        for (int j = 0; j < TAMANHO; ++j) {
            std::cout << matrizTriangular[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
