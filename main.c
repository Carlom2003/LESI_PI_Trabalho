#include <stdio.h>
#include <stdlib.h>

void carregarFuncionarios();
void carregarEmenta();
void carregarEscolhas();
void apresentarRefeicoes();
void listarUtentes();
void listarRefeicoesUtente();
void calcularMediaCalorias();
void gerarTabelaEmenta();

int main() {
    int opcao;

    do {
        printf("\n========== MENU PRINCIPAL ==========\n");
        printf("1. Carregar ficheiro de funcionários\n");
        printf("2. Carregar ficheiro de ementa semanal\n");
        printf("3. Carregar ficheiro de escolhas dos utentes\n");
        printf("4. Apresentar refeições requeridas por dia\n");
        printf("5. Listar utentes e total da despesa\n");
        printf("6. Listar refeições de um utente por período\n");
        printf("7. Calcular médias de calorias por dia\n");
        printf("8. Gerar tabela de ementa semanal de um utente\n");
        printf("0. Sair\n");
        printf("=====================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                carregarFuncionarios();
                break;
            case 2:
                carregarEmenta();
                break;
            case 3:
                carregarEscolhas();
                break;
            case 4:
                apresentarRefeicoes();
                break;
            case 5:
                listarUtentes();
                break;
            case 6:
                listarRefeicoesUtente();
                break;
            case 7:
                calcularMediaCalorias();
                break;
            case 8:
                gerarTabelaEmenta();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

void carregarFuncionarios() {
    printf("Carregar ficheiro de funcionários...\n");
    // Implementação da funcionalidade
}

void carregarEmenta() {
    printf("Carregar ficheiro de ementa semanal...\n");
    // Implementação da funcionalidade
}

void carregarEscolhas() {
    printf("Carregar ficheiro de escolhas dos utentes...\n");
    // Implementação da funcionalidade
}

void apresentarRefeicoes() {
    printf("Apresentar refeições requeridas por dia...\n");
    // Implementação da funcionalidade
}

void listarUtentes() {
    printf("Listar utentes e total da despesa...\n");
    // Implementação da funcionalidade
}

void listarRefeicoesUtente() {
    printf("Listar refeições de um utente por período...\n");
    // Implementação da funcionalidade
}

void calcularMediaCalorias() {
    printf("Calcular médias de calorias por dia...\n");
    // Implementação da funcionalidade
}

void gerarTabelaEmenta() {
    printf("Gerar tabela de ementa semanal de um utente...\n");
    // Implementação da funcionalidade
}