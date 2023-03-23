C Enums
Um enum é um tipo especial que representa um grupo de constantes (valores imutáveis).

Para criar um enum, use a enumpalavra-chave, seguida do nome do enum e separe os itens do enum com vírgula:

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
Observe que o último item não precisa de vírgula.

Não é obrigatório usar letras maiúsculas, mas geralmente é considerado uma boa prática.

Enum é a abreviação de "enumerações", que significa "listado especificamente".

Para acessar o enum, você deve criar uma variável dele.

Dentro do main()método, especifique a enumpalavra-chave, seguida do nome do enum ( Level) e depois o nome da variável enum ( myVarneste exemplo):

enum Level myVar;
Agora que você criou uma variável enum ( myVar), pode atribuir um valor a ela.

O valor atribuído deve ser um dos itens dentro da enumeração ( LOW, MEDIUMou HIGH):

enum Level myVar = MEDIUM;
Por padrão, o primeiro item ( LOW) tem o valor 0, o segundo ( MEDIUM) tem o valor 1, etc.

Se você agora tentar imprimir myVar, ele produzirá 1, que representa MEDIUM:

int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  // Print the enum variable
  printf("%d", myVar);

  return 0;
}
Mudar valores
Como você sabe, o primeiro item de uma enumeração tem o valor 0. O segundo tem o valor 1 e assim por diante.

Para entender melhor os valores, você pode alterá-los facilmente:

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
printf("%d", myVar); // Now outputs 50
Observe que, se você atribuir um valor a um item específico, os próximos itens atualizarão seus números de acordo:

enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};
Enum em uma instrução Switch
Enums são frequentemente usados ​​em instruções switch para verificar os valores correspondentes:

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
  return 0;
}
Por que e quando usar enums?
Enums são usados ​​para dar nomes a constantes, o que torna o código mais fácil de ler e manter.

Use enums quando tiver valores que você sabe que não serão alterados, como dias do mês, dias, cores, baralho de cartas, etc.

