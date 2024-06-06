#include <iostream>
#include <vector>
#include <limits>

int main() {
    const int numAlunos = 10;
    std::vector<int> numerosAlunos(numAlunos);
    std::vector<double> alturasAlunos(numAlunos);

    int alunoMaisBaixo, alunoMaisAlto;
    double alturaMaisBaixa = std::numeric_limits<double>::max();
    double alturaMaisAlta = std::numeric_limits<double>::lowest();

    // Ler os números dos alunos e suas alturas
    for (int i = 0; i < numAlunos; ++i) {
        std::cout << "Digite o numero do aluno " << i + 1 << ": ";
        std::cin >> numerosAlunos[i];
        std::cout << "Digite a altura do aluno " << numerosAlunos[i] << " em metros: ";
        std::cin >> alturasAlunos[i];

        // Verificar se o aluno atual é o mais baixo
        if (alturasAlunos[i] < alturaMaisBaixa) {
            alturaMaisBaixa = alturasAlunos[i];
            alunoMaisBaixo = numerosAlunos[i];
        }

        // Verificar se o aluno atual é o mais alto
        if (alturasAlunos[i] > alturaMaisAlta) {
            alturaMaisAlta = alturasAlunos[i];
            alunoMaisAlto = numerosAlunos[i];
        }
    }

    // Mostrar o número e altura do aluno mais baixo
    std::cout << "O aluno mais baixo é o numero " << alunoMaisBaixo << " com altura de " << alturaMaisBaixa << " metros." << std::endl;

    // Mostrar o número e altura do aluno mais alto
    std::cout << "O aluno mais alto é o numero " << alunoMaisAlto << " com altura de " << alturaMaisAlta << " metros." << std::endl;

    return 0;
}