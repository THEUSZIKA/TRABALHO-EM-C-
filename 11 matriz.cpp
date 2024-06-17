#include <iostream>

int main() {
    // Declarar uma matriz 3x3
    int matriz[3][3];

    // Ler os elementos da matriz
    std::cout << "Digite os elementos da matriz 3x3:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matriz[i][j];
        }
    }

    // Calcular a soma dos elementos na diagonal secundária
    int soma_diagonal_secundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];

    // Mostrar o resultado
    std::cout << "A soma dos elementos na diagonal secundária é: " << soma_diagonal_secundaria << std::endl;

    return 0;
}
