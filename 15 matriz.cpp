#include <iostream>
#include <vector>

const int NUM_ALUNOS = 5;
const int NUM_QUESTOES = 10;

// Função para calcular a pontuação de um aluno comparando suas respostas com o gabarito
int calcularPontuacao(const std::vector<char>& respostas_aluno, const std::vector<char>& gabarito) {
    int pontuacao = 0;
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        if (respostas_aluno[i] == gabarito[i]) {
            pontuacao++;
        }
    }
    return pontuacao;
}

int main() {
    // Matriz de respostas dos alunos (5 alunos, 10 questões)
    char respostas[NUM_ALUNOS][NUM_QUESTOES];

    // Vetor de gabarito de respostas (10 questões)
    std::vector<char> gabarito = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'};

    // Leitura das respostas dos alunos
    std::cout << "Digite as respostas dos alunos (a, b, c ou d):" << std::endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Aluno " << i + 1 << ": ";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            std::cin >> respostas[i][j];
        }
    }

    // Vetor para armazenar a pontuação de cada aluno
    std::vector<int> resultado(NUM_ALUNOS);

    // Calcular pontuação de cada aluno
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        resultado[i] = calcularPontuacao(std::vector<char>(respostas[i], respostas[i] + NUM_QUESTOES), gabarito);
    }

    // Exibir resultados
    std::cout << "\nPontuação dos alunos:" << std::endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Aluno " << i + 1 << ": " << resultado[i] << " pontos" << std::endl;
    }

    return 0;
}
