#include <iostream>

int main() {
    // Declarar uma matriz 3x3
    int matriz[3][3];
    int transposta[3][3];

    // Ler os elementos da matriz
    std::cout << "Digite os elementos da matriz 3x3:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matriz[i][j];
        }
    }

    // Calcular a transposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Imprimir a matriz transposta
    std::cout << "A matriz transposta é:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << transposta[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
