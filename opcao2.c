/*arquivo time.h*/
void concatenar(){
    char stringA[15];
    char stringB[15];
    printf("String A: ");
    scanf("%s", stringA);
    printf("String B: ");
    scanf("%s", stringB);
    strcat(stringA, stringB);
    printf("%s\n", stringA);
}

void copiar(){
    char fonte[15];
    char destino[50];
    printf("String fonte:\n");
    printf("String destino: ");
    scanf("%s", fonte);
    scanf("%s", destino);
    strcpy(destino, fonte);
    printf("Após a cópia ser realizada: %s\n", destino);
}

void comparar(){
    char stringA[12];
    char stringB[12];
    printf("String A: ");
    scanf("%s", stringA);
    printf("String B: ");
    scanf("%s", stringB);
    printf("Valor da comparação: %d\n", strcmp(stringA, stringB));
}

void comparar_tamanho(){
    size_t num = 5;
    char stringA[20];
    char stringB[20];
    printf("String A: ");
    scanf("%s", stringA);
    printf("String B: ");
    scanf("%s", stringB);
    printf("Valor da comparação: %d\n", strncmp(stringA, stringB, num));
}

void tamanho_string(){
    char stringA[20];
    char stringB[20];
    printf("String A: %s\n", stringA);
    scanf("%s", stringA);
    printf("Tamanho da string A: %lu\n", strlen(stringA));
    printf("String B: %s\n", stringB);
    scanf("%s", stringB);
    printf("Tamanho da string B: %lu\n", strlen(stringB));
}
