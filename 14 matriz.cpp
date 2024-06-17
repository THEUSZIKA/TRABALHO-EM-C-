#include <iostream>
#include <vector>
#include <algorithm> // Para a função shuffle
#include <random>    // Para o gerador de números aleatórios

const int NUM_MAX = 99; // Número máximo da cartela
const int NUM_LINHAS = 5;
const int NUM_COLUNAS = 5;

// Função para embaralhar um vetor
void embaralharVetor(std::vector<int>& vetor) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vetor.begin(), vetor.end(), g);
}

int main() {
    // Criar vetor com todos os números possíveis (0 a 99)
    std::vector<int> numeros;
    for (int i = 0; i <= NUM_MAX; ++i) {
        numeros.push_back(i);
    }

    // Embaralhar o vetor de números
    embaralharVetor(numeros);

    // Exibir a cartela
    std::cout << "Cartela de Bingo:" << std::endl;
    int contador = 0;
    for (int i = 0; i < NUM_LINHAS; ++i) {
        for (int j = 0; j < NUM_COLUNAS; ++j) {
            std::cout << numeros[contador++] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
