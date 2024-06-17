#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

const int SIZE = 3;

// Função para determinar a próxima jogada
void proximaJogada(int tabuleiro[SIZE][SIZE]) {
    // Vetor para armazenar as posições vazias (0) no tabuleiro
    std::vector<std::pair<int, int>> posicoesVazias;

    // Identifica todas as posições vazias (0)
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (tabuleiro[i][j] == 0) {
                posicoesVazias.push_back(std::make_pair(i, j));
            }
        }
    }

    // Escolhe uma posição aleatória entre as posições vazias
    if (!posicoesVazias.empty()) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        int indice = std::rand() % posicoesVazias.size();
        int linha = posicoesVazias[indice].first;
        int coluna = posicoesVazias[indice].second;

        // Realiza a jogada, considerando que o jogador é representado por -1
        tabuleiro[linha][coluna] = -1;

        std::cout << "Próxima jogada: linha " << linha + 1 << ", coluna " << coluna + 1 << std::endl;
    } else {
        std::cout << "Não há mais jogadas disponíveis." << std::endl;
    }
}

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[SIZE][SIZE]) {
    std::cout << "Tabuleiro:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (tabuleiro[i][j] == -1) {
                std::cout << "X ";
            } else if (tabuleiro[i][j] == 1) {
                std::cout << "O ";
            } else {
                std::cout << "- ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    int tabuleiro[SIZE][SIZE] = {
        {-1, 1, 1},
        {-1, -1, 0},
        {0, 1, 0}
    };

    imprimirTabuleiro(tabuleiro);
    proximaJogada(tabuleiro);
    imprimirTabuleiro(tabuleiro);

    return 0;
}
