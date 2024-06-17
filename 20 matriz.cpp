#include <iostream>
#include <iomanip> // Para usar std::setprecision e std::fixed

const int LINHAS = 3;
const int COLUNAS = 6;

// Função para imprimir a matriz
void imprimirMatriz(float matriz[LINHAS][COLUNAS]) {
    std::cout << "Matriz modificada:" << std::endl;
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            std::cout << std::fixed << std::setprecision(2) << std::setw(8) << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    float matriz[LINHAS][COLUNAS];

    // Leitura da matriz
    std::cout << "Digite os elementos da matriz " << LINHAS << "x" << COLUNAS << ":" << std::endl;
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            std::cin >> matriz[i][j];
        }
    }

    // (a) Imprimir a soma de todos os elementos das colunas ímpares (1ª, 3ª, 5ª)
    std::cout << "\n(a) Soma dos elementos das colunas ímpares:" << std::endl;
    float somaImpares = 0.0;
    for (int i = 0; i < LINHAS; ++i) {
        somaImpares += matriz[i][0] + matriz[i][2] + matriz[i][4];
    }
    std::cout << "Soma: " << std::fixed << std::setprecision(2) << somaImpares << std::endl;

    // (b) Imprimir a média aritmética dos elementos da segunda e quarta colunas
    std::cout << "\n(b) Média aritmética dos elementos da segunda e quarta colunas:" << std::endl;
    float mediaColunas24 = (matriz[0][1] + matriz[1][1] + matriz[2][1] +
                            matriz[0][3] + matriz[1][3] + matriz[2][3]) / LINHAS;
    std::cout << "Média: " << std::fixed << std::setprecision(2) << mediaColunas24 << std::endl;

    // (c) Substituir os valores da sexta coluna pela soma dos valores das colunas 1 e 2
    std::cout << "\n(c) Substituindo os valores da sexta coluna pela soma das colunas 1 e 2:" << std::endl;
    for (int i = 0; i < LINHAS; ++i) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    // (d) Imprimir a matriz modificada
    imprimirMatriz(matriz);

    return 0;
}
