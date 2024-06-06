#include <iostream>
#include <vector>

int main() {
    const int tamanho = 10;
    std::vector<int> vetorA(tamanho);
    std::vector<int> vetorB(tamanho);
    std::vector<int> vetorC(tamanho);

    std::cout << "Digite 10 numeros inteiros para o vetor A:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cin >> vetorA[i];
    }


    std::cout << "Digite 10 numeros inteiros para o vetor B:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cin >> vetorB[i];
    }


    for (int i = 0; i < tamanho; ++i) {
        if (i % 2 == 0) {
            vetorC[i] = vetorA[i];
        } else {
            vetorC[i] = vetorB[i];
        }
    }


    std::cout << "Vetor C (posicoes pares de A e impares de B):" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetorC[i] << " ";
        if ((i + 1) % 2 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}
