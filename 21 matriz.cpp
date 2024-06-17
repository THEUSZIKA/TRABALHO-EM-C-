#include <iostream>

const int SIZE = 2;

// Função para somar duas matrizes
void somarMatrizes(float matriz1[SIZE][SIZE], float matriz2[SIZE][SIZE], float resultado[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para subtrair uma matriz da outra
void subtrairMatrizes(float matriz1[SIZE][SIZE], float matriz2[SIZE][SIZE], float resultado[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Função para adicionar uma constante a uma matriz
void adicionarConstante(float matriz[SIZE][SIZE], float constante) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matriz[i][j] += constante;
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(float matriz[SIZE][SIZE]) {
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
    float matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], resultado[SIZE][SIZE];
    float constante;

    // Leitura das matrizes
    std::cout << "Digite os elementos da primeira matriz " << SIZE << "x" << SIZE << ":" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matriz1[i][j];
        }
    }

    std::cout << "Digite os elementos da segunda matriz " << SIZE << "x" << SIZE << ":" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matriz2[i][j];
        }
    }

    char opcao;
    do {
        // Menu de opções
        std::cout << "\nEscolha uma opção:" << std::endl;
        std::cout << "(a) Somar as duas matrizes" << std::endl;
        std::cout << "(b) Subtrair a primeira matriz da segunda" << std::endl;
        std::cout << "(c) Adicionar uma constante às duas matrizes" << std::endl;
        std::cout << "(d) Imprimir as matrizes" << std::endl;
        std::cout << "(e) Sair" << std::endl;
        std::cout << "Opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 'a':
                somarMatrizes(matriz1, matriz2, resultado);
                std::cout << "Resultado da soma das matrizes:" << std::endl;
                imprimirMatriz(resultado);
                break;
            case 'b':
                subtrairMatrizes(matriz1, matriz2, resultado);
                std::cout << "Resultado da subtração da primeira matriz da segunda:" << std::endl;
                imprimirMatriz(resultado);
                break;
            case 'c':
                std::cout << "Digite a constante a ser adicionada às matrizes: ";
                std::cin >> constante;
                adicionarConstante(matriz1, constante);
                adicionarConstante(matriz2, constante);
                std::cout << "Matrizes após adição da constante:" << std::endl;
                std::cout << "Matriz 1:" << std::endl;
                imprimirMatriz(matriz1);
                std::cout << "Matriz 2:" << std::endl;
                imprimirMatriz(matriz2);
                break;
            case 'd':
                std::cout << "Matriz 1:" << std::endl;
                imprimirMatriz(matriz1);
                std::cout << "Matriz 2:" << std::endl;
                imprimirMatriz(matriz2);
                break;
            case 'e':
                std::cout << "Encerrando o programa..." << std::endl;
                break;
            default:
                std::cout << "Opção inválida! Tente novamente." << std::endl;
                break;
        }

    } while (opcao != 'e');

    return 0;
}
