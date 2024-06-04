#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20;
    int vec[SIZE];
    int uniqueVec[SIZE];
    int uniqueCount = 0;


    std::cout << "Digite 20 valores para o vetor:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> vec[i];
    }


    for (int i = 0; i < SIZE; ++i) {
        bool isUnique = true;
        for (int j = 0; j < uniqueCount; ++j) {
            if (vec[i] == uniqueVec[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueVec[uniqueCount++] = vec[i];
        }
    }


    std::cout << "Elementos únicos do vetor:\n";
    for (int i = 0; i < uniqueCount; ++i) {
        std::cout << uniqueVec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
