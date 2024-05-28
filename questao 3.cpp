#include <iostream>
using namespace std;
//numero x numero
int main() {

double numero[10];
double vetor[10];

  for(int v = 0; v < 10; v++){

     cout << "digite os 10 numeros" << endl;
     cin >> vetor[v]; 
  }

  for(int i = 0; i < 10; i++){

    numero[i] = vetor[i] * vetor[i];
  }
  cout << "quadrado dos numeros:" << endl;
  for(int i = 0; i < 10; i++){

    cout << numero[i] << endl;
  }
  cout << "numeros reais:" << endl;
  for(int i = 0; i < 10; i++){

     cout << vetor[i] << endl;
    
  }
  
}