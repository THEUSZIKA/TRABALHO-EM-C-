#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<double> vetor(SIZE);

    // Lendo os elementos do vetor
    cout << "Digite 10 números reais:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor[i];
    }

    // Ordenando os elementos do vetor
    sort(vetor.begin(), vetor.end());

    // Exibindo o vetor ordenado
    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
