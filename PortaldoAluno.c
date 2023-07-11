#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para exibir a tela de apresentação
void exibirTelaApresentacao() {
    printf("Escola Unijorge\n");
    printf("----------------------------\n");
    printf("Pressione Enter para continuar...");
    getchar(); // Aguarda o usuário pressionar Enter
    system("clear"); // Limpa a tela
}

// Função para exibir a tela de login
void exibirTelaLogin() {
    char username[20];
    char password[20];

    printf("Tela de Login\n");
    printf("----------------------------\n");

    printf("Usuário: ");
    scanf("%s", username);

    printf("Senha: ");
    scanf("%s", password);

    // Verifica se as credenciais estão corretas
    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("Login bem-sucedido! Bem-vindo, %s.\n", username);
    } else {
        printf("Credenciais inválidas. Tente novamente.\n");
    }
}

// Função para exibir o menu e obter a seleção do usuário
int menu(int tipo) {
    int escolha;

    if (tipo == 1) {
        printf("MENU 1\n");
        printf("1. Visualizar Banco de Dados\n");
        printf("2. Visualizar Relatórios\n");
    } else if (tipo == 2) {
        printf("MENU 2\n");
        printf("1. Adicionar Dados\n");
        printf("2. Editar Dados\n");
        printf("3. Excluir Dados\n");
    }

    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    return escolha;
}

// Função para exibir a tela do menu principal
void exibirTelaMenu() {
    int selecaoUsuario;

    // Exibe o primeiro menu
    selecaoUsuario = menu(1);

    if (selecaoUsuario == 1) {
        printf("\n-------- BANCO DE DADOS --------\n\n");
        selecaoUsuario = menu(2);
    } else if (selecaoUsuario == 2) {
        printf("\n-------- RELATÓRIOS --------\n\n");
        selecaoUsuario = menu(1);
    }
}

// Função para exibir o submenu do Banco de Dados
void exibirBanco() {
  int selecaoBanco;

  selecaoBanco = menu(1);

  if (selecaoBanco == 1) {
    printf("\n-------- Alunos --------");
    selecaoBanco = menu(2);
  } else if (selecaoBanco == 2) {
    printf("\n-------- Professor --------");
    selecaoBanco = menu(2);
  }
}

int main() {
    exibirTelaApresentacao();
    exibirTelaLogin();
    exibirTelaMenu();
    exibirBanco();

    return 0;
}
