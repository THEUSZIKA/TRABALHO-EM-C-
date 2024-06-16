#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> vetor;
    int numero;

    cout << "Digite 10 números diferentes:" << endl;

    while (vetor.size() < SIZE) {
        cin >> numero;
        // Verifica se o número já foi digitado anteriormente
        if (find(vetor.begin(), vetor.end(), numero) != vetor.end()) {
            cout << "Número já digitado. Digite outro número:" << endl;
        } else {
            vetor.push_back(numero);
        }
    }

    // Exibindo o vetor final
    cout << "Vetor final:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
