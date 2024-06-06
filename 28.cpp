#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int n = 10;
    vector<int> v(n);
    vector<int> v1, v2;

    // Leitura dos números e armazenamento no vetor v
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Separação dos números em v1 (ímpares) e v2 (pares)
    for (int i = 0; i < n; ++i) {
        if (v[i] % 2 != 0) { // número ímpar
            v1.push_back(v[i]);
        } else { // número par
            v2.push_back(v[i]);
        }
    }

    // Imprimir os elementos utilizados em v1
    cout << "Elementos utilizados em v1 (ímpares):" << endl;
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Imprimir os elementos utilizados em v2
    cout << "Elementos utilizados em v2 (pares):" << endl;
    for (int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}
