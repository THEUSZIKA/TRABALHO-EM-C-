#include <iostream>
#include <vector>

int main() {
    const int tamanho = 10;
    std::vector<int> vetor1(tamanho);
    std::vector<int> vetor2;

    
    std::cout << "Digite 10 numeros inteiros no intervalo [0,50]:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        int num;
        std::cin >> num;
        while (num < 0 || num > 50) {
            std::cout << "Numero fora do intervalo. Digite novamente:" << std::endl;
            std::cin >> num;
        }
        vetor1[i] = num;
    }

   
    for (int i = 0; i < tamanho; ++i) {
        if (vetor1[i] % 2 != 0) {
            vetor2.push_back(vetor1[i]);
        }
    }

   
    std::cout << "Primeiro vetor:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetor1[i] << " ";
        if ((i + 1) % 2 == 0) {
            std::cout << std::endl;
        }
    }

    std::cout << "Segundo vetor (apenas numeros impares):" << std::endl;
    for (int i = 0; i < vetor2.size(); ++i) {
        std::cout << vetor2[i] << " ";
        if ((i + 1) % 2 == 0) {
            std::cout << std::endl;
        }
    }

    
    if (vetor2.size() % 2 != 0) {
        std::cout << std::endl;
    }

    return 0;
}