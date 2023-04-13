/*Escreva um programa em C que substitua todas as ocorrências de um
caractere em uma string por outro caractere fornecido pelo usuário.*/
#include <stdio.h>
#include <string.h>

int main() {
    char string[100], search_char, replace_char;
    int i;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite o caractere que deseja substituir: ");
    scanf(" %c", &search_char);

    printf("Digite o caractere de substituicao: ");
    scanf(" %c", &replace_char);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == search_char) {
            string[i] = replace_char;
        }
    }

    printf("String modificada: %s", string);

    return 0;
}
