# NumPrimos

Desafio 2 (Linguagem: C)
Implementei um algoritmo usando o Crivo de Eratóstenes para listar todos os números primos entre 1 e um valor máximo, com a otimização de iniciar a marcação dos múltiplos a partir do quadrado do número inicial. O algoritmo utiliza um array booleano para marcar como false os múltiplos de cada número primo, e ao final imprime os valores que permanecem true.

Modo de Usar
Compile o arquivo e execute o programa. Você pode especificar o valor máximo diretamente no código ou modificar o programa para receber esse valor como entrada. O programa imprime todos os números primos até o valor máximo no terminal.

Para compilar e executar, siga os passos abaixo em um terminal:

bash
Copiar código
$ gcc desafio2.c -o desafio2
$ ./desafio2
A saída será algo assim:

bash
Copiar código
2
3
5
7
11
13
17
...

Executando
Para compilar, basta abrir o arquivo em um editor que suporte atalhos de compilação e pressionar F6. Isso irá compilar e rodar o programa automaticamente.
