#include <iostream>

using namespace std;

int main() {
    const int n = 6;
    int numeros[n];
    int pares[n], impares[n];
    int somaPares = 0;
    int contPares = 0, contImpares = 0;

    // Leitura dos números
    cout << "Digite 6 números inteiros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];

        // Verifica se é par ou ímpar
        if (numeros[i] % 2 == 0) {
            pares[contPares] = numeros[i];
            somaPares += numeros[i];
            contPares++;
        } else {
            impares[contImpares] = numeros[i];
            contImpares++;
        }
    }

    // Imprime os números pares digitados
    cout << "Números pares digitados:" << endl;
    for (int i = 0; i < contPares; ++i) {
        cout << pares[i] << " ";
    }
    cout << endl;

    // Imprime a soma dos números pares digitados
    cout << "Soma dos números pares digitados: " << somaPares << endl;

    // Imprime os números ímpares digitados
    cout << "Números ímpares digitados:" << endl;
    for (int i = 0; i < contImpares; ++i) {
        cout << impares[i] << " ";
    }
    cout << endl;

    // Imprime a quantidade de números ímpares digitados
    cout << "Quantidade de números ímpares digitados: " << contImpares << endl;

    return 0;
}
