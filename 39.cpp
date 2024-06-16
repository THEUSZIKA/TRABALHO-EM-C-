#include <iostream>
#include <vector>

using namespace std;

vector<int> getNextPascalRow(const vector<int>& previousRow) {
    vector<int> nextRow;
    nextRow.push_back(1);  // O primeiro elemento de cada linha é sempre 1

    for (size_t i = 1; i < previousRow.size(); ++i) {
        nextRow.push_back(previousRow[i - 1] + previousRow[i]);
    }

    nextRow.push_back(1);  // O último elemento de cada linha é sempre 1
    return nextRow;
}

int main() {
    int n;
    cout << "Digite um número inteiro positivo n: ";
    cin >> n;

    if (n <= 0) {
        cout << "O número deve ser positivo e maior que zero." << endl;
        return 1;
    }

    vector<int> currentRow = {1};  // A primeira linha do Triângulo de Pascal

    for (int i = 0; i < n; ++i) {
        // Imprimir a linha atual
        for (int num : currentRow) {
            cout << num << " ";
        }
        cout << endl;

        // Gerar a próxima linha do Triângulo de Pascal
        currentRow = getNextPascalRow(currentRow);
    }

    return 0;
}
