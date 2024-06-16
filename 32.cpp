#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    const int SIZE = 5;
    vector<int> x(SIZE);
    vector<int> y(SIZE);

    // Lendo os elementos do vetor x
    cout << "Digite 5 elementos para o vetor x:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> x[i];
    }

    // Lendo os elementos do vetor y
    cout << "Digite 5 elementos para o vetor y:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> y[i];
    }

    // Soma entre x e y
    vector<int> soma(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        soma[i] = x[i] + y[i];
    }
    cout << "Soma entre x e y:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << soma[i] << " ";
    }
    cout << endl;

    // Produto entre x e y
    vector<int> produto(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        produto[i] = x[i] * y[i];
    }
    cout << "Produto entre x e y:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << produto[i] << " ";
    }
    cout << endl;

    // Diferença entre x e y
    vector<int> diferenca;
    for (int i = 0; i < SIZE; ++i) {
        if (find(y.begin(), y.end(), x[i]) == y.end()) {
            diferenca.push_back(x[i]);
        }
    }
    cout << "Diferença entre x e y (elementos de x que não estão em y):" << endl;
    for (int i = 0; i < diferenca.size(); ++i) {
        cout << diferenca[i] << " ";
    }
    cout << endl;

    // Interseção entre x e y
    vector<int> intersecao;
    for (int i = 0; i < SIZE; ++i) {
        if (find(y.begin(), y.end(), x[i]) != y.end()) {
            intersecao.push_back(x[i]);
        }
    }
    cout << "Interseção entre x e y (elementos que aparecem nos dois vetores):" << endl;
    for (int i = 0; i < intersecao.size(); ++i) {
        cout << intersecao[i] << " ";
    }
    cout << endl;

    // União entre x e y
    un

