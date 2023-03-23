Para criar uma matriz 2D de inteiros, observe o exemplo a seguir:

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
/*Para acessar um elemento de uma matriz bidimensional, você deve especificar o número de índice da linha e da coluna.

Esta instrução acessa o valor do elemento na primeira linha (0) e na terceira coluna (2) do array de matrizes .

Exemplo
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

printf("%d", matrix[0][2]);  // Outputs 2*/

/*Para alterar o valor de um elemento, consulte o número de índice do elemento em cada uma das dimensões:

O exemplo a seguir alterará o valor do elemento na primeira linha (0) e na primeira coluna (0) :

Exemplo
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
matrix[0][0] = 9;

printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1*/

/*Para percorrer um array multidimensional, você precisa de um loop para cada uma das dimensões do array.

O exemplo a seguir gera todos os elementos na matriz da matriz :

Exemplo
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}*/