#include <stdio.h>
int main(){
    for(;;){

        int operacao;
        printf("-------------------------------------\n");
        printf("Bem vindo ao meu painel de consultas!\n");
        printf("-------------------------------------\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("-------------------------------------\n");
        printf("Digite a operacao que voce deseja fazer: ");
        scanf("%d", &operacao);

        if (operacao >= 6){printf("Opcao invalida! Tente novamente.\n");}
        if (operacao < 1){printf("Opcao invalida! Tente novamente.\n");}
        
        double x;
        double y;

        int soma = (operacao == 1);
        if (soma)
        {
            printf("-------------------------------------\n");
            printf("Digite o primeiro numero da soma: ");
            scanf("%lf", &x);
            printf("Digite o segundo numero da soma: ");
            scanf("%lf", &y);
            double resultadosoma =  (x + y);
            printf("O resultado da soma foi: %lf\n", resultadosoma);
        }

        int subtracao = (operacao == 2);
        if (subtracao)
        {
            printf("-------------------------------------\n");
            printf("Digite o primeiro numero da subtracao: ");
            scanf("%lf", &x);
            printf("Digite o segundo numero da subtracao: ");
            scanf("%lf", &y);
            double resultadosubtracao =  (x - y);
            printf("O resultado da subtracao foi: %lf\n", resultadosubtracao);
        }

        int multiplicacao = (operacao == 3);
        if (multiplicacao)
        {
            printf("-------------------------------------\n");
            printf("Digite o primeiro numero da multiplicacao: ");
            scanf("%lf", &x);
            printf("Digite o segundo numero da multiplicacao: ");
            scanf("%lf", &y);
            double resultadomultiplicacao =  (x * y);
            printf("O resultado da multiplicacao foi: %lf\n", resultadomultiplicacao);
        }

        int divisao = (operacao == 4);
        if (divisao)
        {
            printf("-------------------------------------\n");
            printf("Digite o primeiro numero da divisao: ");
            scanf("%lf", &x);
            printf("Digite o segundo numero da divisao: ");
            scanf("%lf", &y);
            double resultadodivisao =  (x / y);
            printf("O resultado da divisao foi: %lf\n", resultadodivisao);
        }
        int sair = (operacao == 5);
        if (sair)
        {
            char confirma;
            printf("-------------------------------------\n");
            printf("Tem certeza que deseja sair? (y/n) ");
            scanf(" %c", &confirma);
            printf("-------------------------------------\n");

            if(confirma == 'y'){
                printf("Saindo...\n");
                break;
            }
            else{
                printf("Voltando ao menu...\n");
            }
            
        }
    }
}