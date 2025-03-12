#include <stdio.h>

void menu();
void itemZeFrita();
void itemZeRustico();
void itemZeDoce();
void itemZeChips();
void itemZeEspecial();

int main() {
    menu();
    return 0;
}

void itemZeFrita() {
    printf("\n\n");
    printf("Item selecionado: Zé Frita \n");
    printf("Descrição: **** \n");
    printf("Preço: R$**,**");

    menu();
}

void itemZeRustico() {
    printf("\n\n");
    printf("Item selecionado: Zé Rústico \n");
    printf("Descrição: **** \n")
    printf("Preço: R$**,**");

    menu();
}

void itemZeDoce() {
    printf("\n\n");
    printf("Item selecionado: Zé Frita Doce \n");
    printf("Descrição: **** \n");
    printf("Preço: R$**,**");

    menu();
}

void itemZeDoce() {
    printf("\n\n");
    printf("Item selecionado: Zé Frita Doce \n");
    printf("Descrição: **** \n");
    printf("Preço: R$**,**");

    menu();
}

void itemZeChips() {
    printf("\n\n");
    printf("Item selecionado: Zé Chips \n");
    printf("Descrição: **** \n");
    printf("Preço: R$**,**");
    
    menu();
}

void itemZeEspecial() {
    printf("\n\n");
    printf("Item selecionado: Zé Especial \n");
    printf("Descrição: **** \n");
    printf("Preço: R$**,**");

    menu();
}

void menu() {

    char item;

    printf("menu: \n\n");
    
    printf("\nA - Zé Frita");
    printf("\nB - Zé Rústico");
    printf("\nC - Zé Frita Doce");
    printf("\nD - Zé Chips");
    printf("\nE - Zé Especial");
    printf("\nX - Encerrar pedido");

    scanf("%c", &item);

    switch (item) {
        case 'a':
        case 'A':
            itemZeFrita();
            break;

        case 'b':
        case 'B':
            itemZeRustico();
            break;

        case 'c':
        case 'C':
            itemZeFritaDoce();
            break;

        case 'd':
        case 'D':
            itemZeChips();
            break;

        case 'e':  
        case 'E':
            itemZeEspecial();
            break;

        case 'x':
        case 'X':
            printf("Operacao cancelada!");
            break;

        default:
            printf("Item nao listado no cardapio (Os itens sao listados a partir de sua numeracao)!");
            break;
    }
}