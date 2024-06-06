#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int n = 10;
    vector<int> v1(n), v2(n);
    vector<int> intersecao;

    // Leitura dos elementos para o primeiro vetor
    cout << "Digite os elementos do primeiro vetor (10 elementos):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    // Leitura dos elementos para o segundo vetor
    cout << "Digite os elementos do segundo vetor (10 elementos):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    // Ordenar os vetores para facilitar a busca pela interseção
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    // Encontrar a interseção entre os dois vetores
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (v1[i] < v2[j]) {
            ++i;
        } else if (v2[j] < v1[i]) {
            ++j;
        } else {
            // Encontrou um número que está nos dois vetores
            if (intersecao.empty() || intersecao.back() != v1[i]) {
                intersecao.push_back(v1[i]);
            }
            ++i;
            ++j;
        }
    }

    // Imprimir o vetor de interseção
    cout << "Interseção dos dois vetores:" << endl;
    for (int num : intersecao) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
