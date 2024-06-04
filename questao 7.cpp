#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;

 
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> numeros[i];
    }

  
    cout << "O vetor digitado é:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

   
    int maior = numeros[0];
    int posicao = 0;
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }

 
    cout << "O maior elemento é: " << maior << endl;
    cout << "Ele está na posição: " << posicao << endl;

    return 0;
}