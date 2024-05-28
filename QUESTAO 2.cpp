#include <iostream>
using namespace std;

int main() {

  int vetor[6];
  cout << "\nDigite 6 valores:\n";
  for (int v = 0; v < 6; v++) {

    cout << "\nDigite o " << v + 1 << ": " << endl;
    cin >> vetor[v];
  }

  for(int  v = 0; v < 6; v++){
    cout << vetor[v] << " ";
  }

  return 0;
}