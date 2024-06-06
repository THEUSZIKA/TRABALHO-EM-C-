#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Inicializa vetor vazio
    vector<int> vetor;
    // Inicializa o contador de números encontrados
    int num_encontrados = 0;
    // Inicia o número a ser testado
    int numero = 1;

    while (num_encontrados < 100) {
        // Verifica se o número não é múltiplo de 7 ou termina com 7
        if (numero % 7 != 0 && numero % 10 != 7) {
            // Adiciona o número ao vetor
            vetor.push_back(numero);
            // Incrementa o contador de números encontrados
            num_encontrados++;
        }
        // Incrementa o número
        numero++;
    }

    // Imprime o vetor
    cout << "Os 100 primeiros números naturais que não são múltiplos de 7 ou terminam com 7 são:" << endl;
    for (int i = 0; i < vetor.size(); ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}