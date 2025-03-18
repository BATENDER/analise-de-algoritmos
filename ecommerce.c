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
    printf("Item selecionado: Ze Frita \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    menu();
}

void itemZeRustico() {
    printf("\n\n");
    printf("Item selecionado: Ze Rustico \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    menu();
}

void itemZeDoce() {
    printf("\n\n");
    printf("Item selecionado: Ze Frita Doce \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    menu();
}

void itemZeChips() {
    printf("\n\n");
    printf("Item selecionado: Ze Chips \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    menu();
}

void itemZeEspecial() {
    printf("\n\n");
    printf("Item selecionado: Ze Especial \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    menu();
}

void menu() {
    fflush(stdin);

    char item;

    printf("\n---------------------------------------------------------------------------------\n");

    printf("\nMENU: \n\n");
    
    printf("\n1 - Ze Frita");
    printf("\n2 - Ze Rustico");
    printf("\n3 - Ze Frita Doce");
    printf("\n4 - Ze Chips");
    printf("\n5 - Ze Especial");
    printf("\nX - Encerrar pedido");

    printf("\n\nDigite seu pedido (Ou aperte 'x' para cancelar) : ");

    scanf("%c", &item);

    printf("\n---------------------------------------------------------------------------------\n");

    switch (item) {
        case '1' :
            itemZeFrita();
            break;

        case '2' :
            itemZeRustico();
            break;

        case '3' :
            itemZeDoce();
            break;

        case '4' :
            itemZeChips();
            break;

        case '5' :
            itemZeEspecial();
            break;

        case 'x':
        case 'X':
            printf("\nOperacao cancelada!\n");
            break;

        default:
            printf("\nItem nao listado no cardapio (Os itens sao listados a partir de sua numeracao)!");
            break;
    }
}