Manipulação de arquivos
Em C, você pode criar, abrir, ler e gravar em arquivos declarando um ponteiro do tipo FILEe usando a fopen()função:

FILE *fptr
fptr = fopen(filename, mode);
FILEé basicamente um tipo de dado, e precisamos criar uma variável de ponteiro para trabalhar com ele ( fptr). Por enquanto, esta linha não é importante. É apenas algo que você precisa ao trabalhar com arquivos.

Para realmente abrir um arquivo, use a fopen()função, que recebe dois parâmetros:

Parameter	Description
filename	The name of the actual file you want to open (or create), like filename.txt
mode	A single character, which represents what you want to do with the file (read, write or append):
w - Writes to a file
a - Appends new data to a file
r - Reads from a file

Criar um arquivo
Para criar um arquivo, você pode usar o wmodo dentro da fopen()função.

O wmodo é usado para gravar em um arquivo. No entanto , se o arquivo não existir, ele criará um para você:

Exemplo
FILE *fptr;

// Create a file
fptr = fopen("filename.txt", "w");

// Close the file
fclose(fptr);
Nota: O arquivo é criado no mesmo diretório que seus outros arquivos C, se nada mais for especificado.

Em nosso computador, fica assim:


Dica: Se você deseja criar o arquivo em uma pasta específica, basta fornecer um caminho absoluto:

fptr = fopen("C:\directoryname\filename.txt", "w");
Fechando o arquivo
Você notou a fclose()função em nosso exemplo acima?

Isso fechará o arquivo quando terminarmos.

É considerada uma boa prática, pois garante que:

As alterações são salvas corretamente
Outros programas podem usar o arquivo (se você quiser)
Limpe o espaço de memória desnecessário
Nos próximos capítulos, você aprenderá como escrever conteúdo em um arquivo e ler a partir dele.

Gravar em um arquivo
Vamos usar o wmodo do capítulo anterior novamente e escrever algo no arquivo que acabamos de criar.

O wmodo significa que o arquivo está aberto para gravação . Para inserir conteúdo nele, você pode usar a fprint() função e adicionar a variável de ponteiro ( fptrno nosso exemplo) e algum texto:

Exemplo
FILE *fptr;

// Open a file in writing mode
fptr = fopen("filename.txt", "w");

// Write some text to the file
fprintf(fptr, "Some text");

// Close the file
fclose(fptr);
Como resultado, quando abrimos o arquivo em nosso computador, ele se parece com isso:


Nota: Se você gravar em um arquivo que já existe, o conteúdo antigo será excluído e o novo conteúdo será inserido. É importante saber disso, pois você pode apagar acidentalmente o conteúdo existente.

Por exemplo:

Exemplo
fprintf(fptr, "Hello World!");
Como resultado, quando abrimos o arquivo em nosso computador, ele diz "Hello World!" em vez de "Algum texto":


Anexar conteúdo a um arquivo
Se quiser adicionar conteúdo a um arquivo sem excluir o conteúdo antigo, você pode usar o amodo.

O amodo anexa o conteúdo no final do arquivo:

Exemplo
FILE *fptr;

// Open a file in append mode
fptr = fopen("filename.txt", "a");

// Append some text to the file
fprintf(fptr, "\nHi everybody!");

// Close the file
fclose(fptr);
Como resultado, quando abrimos o arquivo em nosso computador, ele se parece com isso:

Ler um arquivo
No capítulo anterior, escrevemos em um arquivo usando os modos w e adentro da fopen()função.

Para ler de um arquivo, você pode usar o rmodo:

Exemplo
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");
Isso fará com que o filename.txtaberto para leitura.

Dá um pouco de trabalho ler um arquivo em C. Aguente firme! Nós o guiaremos passo a passo.

Em seguida, precisamos criar uma string que seja grande o suficiente para armazenar o conteúdo do arquivo.

Por exemplo, vamos criar uma string que pode armazenar até 100 caracteres:

Exemplo
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];
Para ler o conteúdo de filename.txt, podemos usar a fgets()função.

A fgets()função recebe três parâmetros:

Exemplo
fgets(myString, 100, fptr);
O primeiro parâmetro especifica onde armazenar o conteúdo do arquivo, que estará no myStringarray que acabamos de criar.
O segundo parâmetro especifica o tamanho máximo dos dados a serem lidos, que deve corresponder ao tamanho de myString( 100).
O terceiro parâmetro requer um ponteiro de arquivo que é usado para ler o arquivo ( fptrem nosso exemplo).
Agora, podemos imprimir a string, que produzirá o conteúdo do arquivo:

Exemplo
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and store it inside myString
fgets(myString, 100, fptr);

// Print the file content
printf("%s", myString);

// Close the file
fclose(fptr);
Hello World!

Nota: A fgetsfunção lê apenas a primeira linha do arquivo. Se você se lembra, havia duas linhas de texto em filename.txt.

Para ler cada linha do arquivo, você pode usar um whileloop:

Exemplo
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and print it
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}

// Close the file
fclose(fptr);
Hello World!
Hi everybody!

Boa prática
Se você tentar abrir um arquivo para leitura que não existe, a fopen()função retornará NULL.

Dica: como boa prática, podemos usar uma ifinstrução para testar NULLe imprimir algum texto (quando o arquivo não existir):

Exemplo
FILE *fptr;

// Open a file in read mode
fptr = fopen("loremipsum.txt", "r");

// Print some text if the file does not exist
if(fptr == NULL) {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);
Se o arquivo não existir, o seguinte texto será impresso:

Not able to open the file.

Com isso em mente, podemos criar um código mais sustentável se usarmos nosso exemplo de "ler um arquivo" acima novamente:

Exemplo
Se o arquivo existir, leia o conteúdo e imprima. Se o arquivo não existir, imprima uma mensagem:

FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// If the file exist
if(fptr != NULL) {

  // Read the content and print it
  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

// If the file does not exist
} else {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);
Hello World!
Hi everybody!