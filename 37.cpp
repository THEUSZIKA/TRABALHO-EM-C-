#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int SIZE = 11;
    vector<double> A(SIZE);

    // Lendo os elementos do vetor
    cout << "Digite 11 números reais para o vetor A, onde A1 < A2 < ... < A6 > A7 > A8 > ... > A11:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> A[i];
    }

    // Reverter a segunda parte do vetor (de A7 a A11)
    reverse(A.begin() + 6, A.end());

    // Vetor B para armazenar a ordenação completa
    vector<double> B(SIZE);

    // Índices para fusão
    int i = 0, j = 6, k = 0;

    // Mesclando as duas partes ordenadas
    while (i < 6 && j < SIZE) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }

    // Copiando os elementos restantes da primeira parte, se houver
    while (i < 6) {
        B[k++] = A[i++];
    }

    // Copiando os elementos restantes da segunda parte, se houver
    while (j < SIZE) {
        B[k++] = A[j++];
    }

    // Exibindo o vetor ordenado
    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
