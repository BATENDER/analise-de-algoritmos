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

void menu() {
    char item;
    printf("menu: \n\n
    
    \nA - Zé Frita
    \nB - Zé Rústico
    \nC - Zé Frita Doce
    \nD - Zé Chips
    \nE - Zé Especial
    \nX - Encerrar pedido
    
    
    ");

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
            itemZeDoce();
            break;

        case 'd':
        case 'D':
            itemZeChips();
            break;

        case 'e':  
        case 'E':  
            itemZeEspecial();
            break;

        // case 'x':   case 'X':   printf("Operacao cancelada!");

        default:
            printf("Item nao listado no cardapio (Os itens sao listados a partir de sua numeracao)!");
            break;
    }
}#include <stdio.h>

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

void menu() {
    char item;
    printf("menu: \n\n
    
    \nA - Zé Frita
    \nB - Zé Rústico
    \nC - Zé Frita Doce
    \nD - Zé Chips
    \nE - Zé Especial
    \nX - Encerrar pedido
    
    
    ");

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
            itemZeDoce();
            break;

        case 'd':
        case 'D':
            itemZeChips();
            break;

        case 'e':  
        case 'E':  
            itemZeEspecial();
            break;

        // case 'x':   case 'X':   printf("Operacao cancelada!");

        default:
            printf("Item nao listado no cardapio (Os itens sao listados a partir de sua numeracao)!");
            break;
    }
}