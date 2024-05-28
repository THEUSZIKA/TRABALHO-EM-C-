#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int>num(8);
  int x, y;
  int soma;

  for(int i = 0; i < 8; i++){

    cout << "digite os 8 numeros:";
    cin >> num[i];
  }
  cout << "Me diga a posição de x de 0 a 7: ";
  cin >> x;
  cout << "Me diga a posição de y de 0 a 7: ";
  cin >> y;

  soma = num[x] + num[y];

  cout << "O numeros escolhidos foram: " << num[x] << " e " << num[y] << endl;
  cout << "A soma desses numeros será: " << soma << endl;


  return 0;



}