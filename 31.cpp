#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> vetor1(SIZE);
    vector<int> vetor2(SIZE);
    unordered_set<int> conjunto;  // Usamos um conjunto para eliminar elementos duplicados

    // Lendo os elementos do primeiro vetor
    cout << "Digite 10 elementos para o primeiro vetor:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor1[i];
        conjunto.insert(vetor1[i]);  // Adicionando elementos ao conjunto
    }

    // Lendo os elementos do segundo vetor
    cout << "Digite 10 elementos para o segundo vetor:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor2[i];
        conjunto.insert(vetor2[i]);  // Adicionando elementos ao conjunto
    }

    // Transferindo os elementos do conjunto para um vetor de união
    vector<int> uniao(conjunto.begin(), conjunto.end());

    // Exibindo o vetor de união
    cout << "Vetor de união (sem elementos repetidos):" << endl;
    for (int i = 0; i < uniao.size(); ++i) {
        cout << uniao[i] << " ";
    }
    cout << endl;

    return 0;
}
