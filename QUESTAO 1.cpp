#include <iostream>
using namespace std;
//Mostre na tela cada valor do vetor A, um em cada linha.
int main() {

  int vetorA[6] = {1, 0, 5, -2, -5, 7};
  int soma = vetorA[0] + vetorA[1] + vetorA[5];

  cout << "a soma dos valores das posições é: " << soma << endl;
  vetorA[4] = 100;

  for(int c = 0; c < 6; c++){
    cout << vetorA[c] << endl;

  }

  return 0;
}