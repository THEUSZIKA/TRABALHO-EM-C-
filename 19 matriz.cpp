#include <iostream>
#include <iomanip> // Para usar std::setprecision e std::fixed
#include <vector>

const int NUM_ALUNOS = 5;
const int NUM_COLUNAS = 4;

// Função para calcular a média das notas finais dos alunos
double calcularMediaGeral(const std::vector<std::vector<int>>& matriz) {
    double somaNotas = 0.0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        somaNotas += matriz[i][3]; // A quarta coluna contém as notas finais
    }
    return somaNotas / NUM_ALUNOS;
}

int main() {
    std::vector<std::vector<int>> matriz(NUM_ALUNOS, std::vector<int>(NUM_COLUNAS));

    // Leitura da matriz de informações dos alunos
    std::cout << "Digite as informações dos alunos:" << std::endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Aluno " << i + 1 << ":" << std::endl;
        std::cout << "Número de Matrícula: ";
        std::cin >> matriz[i][0]; // Primeira coluna: número de matrícula
        std::cout << "Média das Provas: ";
        std::cin >> matriz[i][1]; // Segunda coluna: média das provas
        std::cout << "Média dos Trabalhos: ";
        std::cin >> matriz[i][2]; // Terceira coluna: média dos trabalhos
        std::cout << "Nota Final: ";
        std::cin >> matriz[i][3]; // Quarta coluna: nota final
    }

    // Calcular a média geral das notas finais
    double mediaGeral = calcularMediaGeral(matriz);

    // Contar quantos alunos tiveram nota final acima da média geral
    int alunosAcimaMedia = 0;
    std::vector<int> indicesAlunosAcimaMedia;

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (matriz[i][3] > mediaGeral) {
            alunosAcimaMedia++;
            indicesAlunosAcimaMedia.push_back(i);
        }
    }

    // Exibir resultados
    std::cout << "\nMédia geral das notas finais: " << std::setprecision(2) << std::fixed << mediaGeral << std::endl;
    std::cout << "Número de alunos com nota final acima da média geral: " << alunosAcimaMedia << std::endl;
    std::cout << "\nAlunos com nota final acima da média geral:" << std::endl;
    for (int i : indicesAlunosAcimaMedia) {
        std::cout << "Aluno " << i + 1 << ":" << std::endl;
        std::cout << "Número de Matrícula: " << matriz[i][0] << std::endl;
        std::cout << "Média das Provas: " << matriz[i][1] << std::endl;
        std::cout << "Média dos Trabalhos: " << matriz[i][2] << std::endl;
        std::cout << "Nota Final: " << matriz[i][3] << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
