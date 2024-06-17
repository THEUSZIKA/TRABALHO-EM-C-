#include <iostream>
#include <vector>

const int NUM_ALUNOS = 3;
const int NUM_QUESTOES = 10;

// Função para calcular a nota de um aluno comparando suas respostas com o gabarito
int calcularNota(const std::vector<char>& respostas_aluno, const std::vector<char>& gabarito) {
    int nota = 0;
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        if (respostas_aluno[i] == gabarito[i]) {
            nota++;
        }
    }
    return nota;
}

int main() {
    // Gabarito de respostas (10 questões)
    std::vector<char> gabarito = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e'};

    // Matrículas e respostas dos alunos
    std::vector<int> matriculas(NUM_ALUNOS);
    std::vector<std::vector<char>> respostas_alunos(NUM_ALUNOS, std::vector<char>(NUM_QUESTOES));

    // Leitura das matrículas e respostas dos alunos
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Digite a matrícula do aluno " << i + 1 << ": ";
        std::cin >> matriculas[i];

        std::cout << "Digite as respostas do aluno " << i + 1 << " (a, b, c, d ou e):" << std::endl;
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            std::cin >> respostas_alunos[i][j];
        }
    }

    // Vetor para armazenar as notas dos alunos
    std::vector<int> notas(NUM_ALUNOS);

    // Calcular a nota de cada aluno
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        notas[i] = calcularNota(respostas_alunos[i], gabarito);
    }

    // Exibir resultados
    std::cout << "\nResultados dos alunos:" << std::endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Aluno " << i + 1 << " - Matrícula: " << matriculas[i] << ", Respostas: ";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            std::cout << respostas_alunos[i][j] << " ";
        }
        std::cout << ", Nota: " << notas[i] << std::endl;
    }

    // Calcular o percentual de aprovação
    int aprovados = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (notas[i] >= 7) {
            aprovados++;
        }
    }
    double percentual_aprovacao = (static_cast<double>(aprovados) / NUM_ALUNOS) * 100.0;

    std::cout << "\nPercentual de aprovação: " << percentual_aprovacao << "%" << std::endl;

    return 0;
}
