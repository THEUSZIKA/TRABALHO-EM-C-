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
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    std::cout << "Vetor C (A - B):" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetorC[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}