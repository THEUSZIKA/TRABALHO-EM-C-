#include <iostream>
#include <vector>

int main() {
    const int tamanho = 50;
    std::vector<int> vetor(tamanho);

   
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

  
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
