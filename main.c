#include <stdio.h>
#define SIZE 200

//variáveis globais
char nome[SIZE][50];
char email[SIZE] [50];
int cpf [SIZE];
int op;

void cadastro(); //protótipo da função

int main (void){
    cadastro();

}
void cadastro(){
    static int linha;
    do{
        printf("\nDigite o nome: ");
        scanf("%s", &nome[linha]); //%s é usado porque é uma string
        printf("\nDigite o email: ");
        scanf("%s", &email[linha]);
        printf("\nDigite o cpf: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;




    }while (op==1);
}
