#include <stdio.h>

void menu(char item);
// void itemZeFrita();
// void itemZeRustico();
// void itemZeDoce();
// void itemZeChips();
// void itemZeEspecial();

int main() {
    char item;

    printf("menu: \n\n
    
    \nA - Zé Frita
    \nB - Zé Rústico
    \nC - Zé Frita Doce
    \nD - Zé Chips
    \nE - Zé Especial
    \nX - Encerrar pedido"
    
    );

    scanf("%c", &item);

    menu(item);
    
    return 0;
}

void menu(char item) {

    switch (item) {
        case 'a':
        case 'A':  
            printf("\n\n
            
            Item selecionado: Zé Frita

            \n

            Descrição: ****

            \n

            Preço: R$**,**
            
            ");
            break;

        case 'b':
        case 'B':
            printf("\n\n
            
            Item selecionado: Zé Rústico

            \n

            Descrição: ****

            \n

            Preço: R$**,**
            
            ");
            break;

        case 'c':
        case 'C':
            printf("\n\n
            
            Item selecionado: Zé Frita Doce

            \n

            Descrição: ****

            \n

            Preço: R$**,**
            
            ");
            break;

        case 'd':
        case 'D':
            printf("\n\n
            
            Item selecionado: Zé Chips

            \n

            Descrição: ****

            \n

            Preço: R$**,**
            
            ");
            break;

        case 'e':  
        case 'E':  
            printf("\n\n
            
            Item selecionado: Zé Especial

            \n

            Descrição: ****

            \n

            Preço: R$**,**
            
            ");
            break;

        // case 'x':   case 'X':   printf("Operacao cancelada!");

        default:
            printf("Item nao listado no cardapio (Os itens sao listados a partir de sua numeracao)!");
            break;
    }
}