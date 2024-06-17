#include <iostream>

const int NUM_ALUNOS = 10;
const int NUM_PROVAS = 3;

int main() {
    // Matriz de notas dos alunos (10 alunos, 3 provas)
    int notas[NUM_ALUNOS][NUM_PROVAS];

    // Leitura das notas dos alunos
    std::cout << "Digite as notas dos alunos:" << std::endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Aluno " << i + 1 << ": ";
        for (int j = 0; j < NUM_PROVAS; ++j) {
            std::cin >> notas[i][j];
        }
    }

    // Vetores para contar quantos alunos tiveram a pior nota em cada prova
    int piorNotaProva1 = 0, piorNotaProva2 = 0, piorNotaProva3 = 0;

    // Determinar quantos alunos tiveram a pior nota em cada prova
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        // Encontrar a pior nota de cada aluno
        int piorNota = notas[i][0];
        for (int j = 1; j < NUM_PROVAS; ++j) {
            if (notas[i][j] < piorNota) {
                piorNota = notas[i][j];
            }
        }

        // Contabilizar a pior nota de cada aluno na respectiva prova
        if (piorNota == notas[i][0]) {
            piorNotaProva1++;
        } else if (piorNota == notas[i][1]) {
            piorNotaProva2++;
        } else if (piorNota == notas[i][2]) {
            piorNotaProva3++;
        }
    }

    // Exibir resultados
    std::cout << "\nNúmero de alunos com pior nota em cada prova:" << std::endl;
    std::cout << "Prova 1: " << piorNotaProva1 << " aluno(s)" << std::endl;
    std::cout << "Prova 2: " << piorNotaProva2 << " aluno(s)" << std::endl;
    std::cout << "Prova 3: " << piorNotaProva3 << " aluno(s)" << std::endl;

    return 0;
}
