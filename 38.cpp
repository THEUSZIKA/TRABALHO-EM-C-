#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<double> vetor;

    cout << "Digite 10 valores numéricos:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        double numero;
        cin >> numero;

        // Insere o número na posição correta para manter a ordem crescente
        auto pos = lower_bound(vetor.begin(), vetor.end(), numero);
        vetor.insert(pos, numero);
    }

    // Exibindo o vetor ordenado
    cout << "Valores em ordem crescente:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
