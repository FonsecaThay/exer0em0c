#include <stdio.h>
#include <string.h>
#include "texto.h"

int main()
{
    int main(){
    int opcao;
    printf("Digite o numero para a função de string que deseja realizar:\n");
    printf("1. Concatenação\n");
    printf("2. Copiar\n");
    printf("3. Comparação\n");
    printf("4. Comparar p/ tamanho\n");
    printf("5. Tamanho\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d",&opcao);

    switch (opcao){
        case 1:
            concatenar();
            break;
    
        case 2:
            copiar();
            break;
    
        case 3:
            comparar();
            break;
    
        case 4:
            comparar_tamanho();
            break;
        case 5 :
            tamanho_string();
            break;

        default :
        printf ("Valor invalido!\n");
    }
    return 0;
}
}
