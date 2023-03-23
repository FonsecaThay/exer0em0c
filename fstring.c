/*Funções de String
C também tem muitas funções de string úteis, que podem ser usadas para realizar certas operações em strings.

Para usá-los, você deve incluir o <string.h>arquivo de cabeçalho em seu programa:

#include <string.h>
Comprimento da corda
Por exemplo, para obter o comprimento de uma string, você pode usar a strlen()função:

Exemplo
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));
No capítulo Strings , costumávamos sizeofobter o tamanho de uma string/array. Observe que sizeofe strlense comporta de maneira diferente, pois sizeoftambém inclui o \0caractere ao contar:

Exemplo
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));   // 26
printf("%d", sizeof(alphabet));   // 27
Também é importante que você saiba que sizeofsempre retornará o tamanho da memória (em bytes), e não o tamanho real da string:

Exemplo
char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));   // 26
printf("%d", sizeof(alphabet));   // 50
Concatenar Strings
Para concatenar (combinar) duas strings, você pode usar a strcat()função:

Exemplo
char str1[20] = "Hello ";
char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("%s", str1);
Observe que o tamanho de str1deve ser grande o suficiente para armazenar o resultado das duas strings combinadas (20 em nosso exemplo).

Copiar Strings
Para copiar o valor de uma string para outra, você pode usar a strcpy()função:

Exemplo
char str1[20] = "Hello World!";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);
Observe que o tamanho de str2deve ser grande o suficiente para armazenar a string copiada (20 em nosso exemplo).

Comparar Strings
Para comparar duas strings, você pode usar a strcmp() função.

Retorna 0se as duas strings forem iguais, caso contrário um valor diferente de 0:

Exemplo
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)*/