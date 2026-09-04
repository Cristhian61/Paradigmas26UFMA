# include <stdio.h>
#include <stdbool.h>

int main() {
    
    float saldo, temp;
    int operador;
    bool continuar = true;

    while(continuar) {
        printf("\n\n===============================\n");
        printf("\t Caixa Eletrônico\n");
        printf("===============================\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("===============================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &operador);
        printf("\n\n");

        switch(operador) {
            case 1:
                printf("Seu saldo é: %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor a ser depositado: ");
                scanf("%f", &temp);
                saldo += temp;
                printf("Depósito realizado com sucesso!\n");
                break;
            case 3:
                printf("Digite o valor a ser sacado: ");
                scanf("%f", &temp);
                if(temp <= saldo) {
                    saldo -= temp;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;
            case 4:
                continuar = false;
                printf("Obrigado por utilizar nossos serviços!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}