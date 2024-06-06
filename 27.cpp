#include <iostream>
#include <vector>

using namespace std;


bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int n = 10;
    vector<int> vetor(n);

    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> vetor[i];
    }

    
    cout << "Números primos e suas posições no vetor:" << endl;
    for (int i = 0; i < n; ++i) {
        if (ehPrimo(vetor[i])) {
            cout << "Número: " << vetor[i] << " - Posição: " << i << endl;
        }
    }

    return 0;
}
