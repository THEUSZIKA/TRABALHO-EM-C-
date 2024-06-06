#include <iostream>
#include <vector>

int main() {
    const int tamanho = 5;
    std::vector<double> vetorA(tamanho);
    std::vector<double> vetorB(tamanho);
    double produtoEscalar = 0.0;

  
    std::cout << "Digite 5 numeros reais para o vetor A:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cin >> vetorA[i];
    }

   
    std::cout << "Digite 5 numeros reais para o vetor B:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cin >> vetorB[i];
    }

   
    for (int i = 0; i < tamanho; ++i) {
        produtoEscalar += vetorA[i] * vetorB[i];
    }

    std::cout << "Vetor A: ";
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vetor B: ";
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetorB[i] << " ";
    }
    std::cout << std::endl;

   
    std::cout << "Produto escalar (A . B): " << produtoEscalar << std::endl;

    return 0;
}