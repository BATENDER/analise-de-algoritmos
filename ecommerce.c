#include <stdio.h>
#include <string.h>

int contador = 0;
char item[101];

void menu(int contador, char* item);
void itemZeFrita();
void itemZeRustico();
void itemZeDoce();
void itemZeChips();
void itemZeEspecial();
void concluirPedido(int contador, char* item);

int main() {
    menu(contador, item);
    return 0;
}

void itemZeFrita() {
    printf("\n\n");
    printf("Item selecionado: Ze Frita \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    item[contador] = '1';
    contador += 1;
}

void itemZeRustico() {
    printf("\n\n");
    printf("Item selecionado: Ze Rustico \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    item[contador] = '2';
    contador += 1;
}

void itemZeDoce() {
    printf("\n\n");
    printf("Item selecionado: Ze Frita Doce \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    item[contador] = '3';
    contador += 1;
}

void itemZeChips() {
    printf("\n\n");
    printf("Item selecionado: Ze Chips \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    item[contador] = '4';
    contador += 1;
}

void itemZeEspecial() {
    printf("\n\n");
    printf("Item selecionado: Ze Especial \n");
    printf("Descricao: **** \n");
    printf("Preco: R$**,**\n");

    item[contador] = '5';
    contador += 1;
    
    // for (int j = 0; j <= i; j++)
    //     printf("\n\n%c\n\n", item[j]);

}

void concluirPedido(int contador, char* item) {
    printf("\n\n\n");

    for (int i = 0; i <= contador; contador++) {
        switch (item[contador]) {
            case '1' :
                printf("Ze Frita \n");
                break;

            case '2' :
                printf("Ze Rustico \n");
                break;

            case '3' :
                printf("Ze Frita Doce \n");
                break;

            case '4' :
                printf("Ze Chips \n");
                break;

            case '5' :
                printf("Ze Especial \n");
                break;

            default :
                printf("Erro");
        }
    }

    printf("\n\n\n");
}

void menu(int contador, char* item) {
    fflush(stdin);

    // for (int j = 0; j <= i; j++)
    // printf("\n\n%c\n\n", item[j]);

    printf("\n---------------------------------------------------------------------------------\n");

    printf("\nMENU: \n\n");
    
    printf("\n1 - Ze Frita");
    printf("\n2 - Ze Rustico");
    printf("\n3 - Ze Frita Doce");
    printf("\n4 - Ze Chips");
    printf("\n5 - Ze Especial");
    printf("\nX - Encerrar pedido");

    printf("\n\nDigite seu pedido (Ou aperte 'x' para cancelar) : ");
    char op;
    scanf("%s", &op);
    item[contador] = op;
    // printf("\n\n%c", op);

    printf("\n---------------------------------------------------------------------------------\n");

    switch (item[contador]) {
        case '1' :
            itemZeFrita();
            menu(contador, item);
            break;

        case '2' :
            itemZeRustico();
            menu(contador, item);
            break;

        case '3' :
            itemZeDoce();  
            menu(contador, item);
            break;

        case '4' :
            itemZeChips();
            menu(contador, item);
            break;

        case '5' :
            itemZeEspecial();
            menu(contador, item);
            break;

        case 'x':
        case 'X':
            printf("\nOperacao cancelada!\n");
            concluirPedido(contador, item);
            break;

        default:
            printf("\nItem nao listado no cardapio (Os itens sao listados a partir de sua numeracao)!");
            menu(contador, item);
            break;
    }
}