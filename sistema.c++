#include <cstdio>
#include <iostream>
int menu(){
    int op;
    printf("[1] Homem\n[2] Mulher\n[3] Fim\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &op);
    return op;
}
int homem(){
    int op; float conta;
    while (1) {
        printf("[1] Raio X (R$300)\n[2] Sangue (R$150)\n[3] Espermograma (R$250)\n[4] Fechamento\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &op);
        if (op == 1) {
            conta = conta + 300;
        }else if (op == 2) {
            conta = conta + 150;
        }else if (op == 3) {
            conta = conta + 250;
        }else {
            return conta;
            break;
        }
    }
    
    
}
int mulher(){
    int op; float conta;
    while (1) {
        printf("[1] Raio X (R$300)\n[2] Sangue (R$150)\n[3] Gravidez (R$122)\n[4] Fechamento\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &op);
        if (op == 1) {
            conta = conta + 300;
        }else if (op == 2) {
            conta = conta + 150;
        }else if (op == 3) {
            conta = conta + 122;
        }else {
            return conta;
            break;
        }
    }
}
int main(){
    int op; float conta;
    while (1) {
        op = menu(); 
        if (op == 1) {
            conta = homem();
            printf("Valor total: %.2f\n", conta + 250);
        }else if (op == 2) {
            conta = mulher();
            printf("Valor total: %.2f\n", conta + 250);
        }else {
            break;
        }
    }
}
