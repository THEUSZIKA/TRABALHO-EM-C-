#include <iostream>
#include <cmath>

using namespace std;

double calcularMedia(int v[], int n) {
    double soma = 0;
    for (int i = 0; i < n; ++i) {
        soma += v[i];
    }
    return soma / n;
}

double calcularDesvioPadrao(int v[], int n, double media) {
    double soma_quadrados = 0;
    for (int i = 0; i < n; ++i) {
        soma_quadrados += pow(v[i] - media, 2);
    }
    return sqrt(soma_quadrados / n);
}

int main() {
    const int n = 10;
    int vetor[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 
    double media = calcularMedia(vetor, n);

    
    double desvio_padrao = calcularDesvioPadrao(vetor, n, media);

    cout << "Vetor: ";
    for (int i = 0; i < n; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    cout << "Média: " << media << endl;
    cout << "Desvio padrão: " << desvio_padrao << endl;

    return 0;
}
