Em C, o booltipo não é um tipo de dados integrado, como intou char.

Foi introduzido em C99 e você deve importar o seguinte arquivo de cabeçalho para usá-lo:

#include <stdbool.h>
Uma variável booleana é declarada com a boolpalavra-chave e só pode receber os valores trueou false:

bool isProgrammingFun = true;
bool isFishTasty = false;

if else//outraforma de escrever
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");