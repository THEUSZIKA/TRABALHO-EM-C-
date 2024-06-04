#include <iostream>
using namespace std;

int main() {
    const int tamanho = 6; 
    int valores[tamanho]; 

  
    cout << "Digite 6 valores inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> valores[i];
    }

  
    cout << "Os valores lidos na ordem inversa são:" << endl;
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << valores[i] << " ";
    }
    cout << endl;

    return 0;
}