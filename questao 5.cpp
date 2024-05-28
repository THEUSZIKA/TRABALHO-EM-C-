#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int>num(10);
  int cont = 0;
  
  for(int i = 0; i < 10; i++){

    cout << "digite os 10 numeros: ";
    cin >> num[i];
  }

  for(int i = 0; i < 10; i++){
    if(num[i] % 2 == 0){
      cont++;
    }
  }

  cout << "quantidade de numeros pares: " << cont;

  return 0;
}