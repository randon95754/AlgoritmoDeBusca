**Disciplina:** Estruturas de Dados Básicas I  
**Professor:** João Guilherme  
**Atividade:** Prática 1 \- Algoritmo de Busca e Recursão  
**Aluno:** Randson Thiago Sales da Silva Lima  
**Matrícula:** 20240032252

**Objetivos da atividade:**

Implementar uma **busca binária** para encontrar a primeira versão defeituosa em um sistema de versões.

Implementar uma **busca sequencial ordenada com contagem de especialidades distintas**, usando bubble sort como método de ordenação.

Implementar uma **função recursiva** para contar quantas vezes um caractere aparece em uma string.

**Como compilar:**

No terminal, dentro da pasta **Atividade\_1/**, execute o **“make test\_c”**. Com isso, irá compilar os arquivos **.c** e o **src\_c/** junto com o **include\_c/**.  
Também irá gerar um executável **test\_c/test\_algorithms**, ao executar será exibido \[OK\] ou \[ERRADO\].

**Funções Implementadas:**

**int busca\_binaria(int n)**  
A função encontra a **primeira versão errada** em um conjunto de versões de 1 até n, utilizando uma API simulada **isBadVersion(int version)** que retorna **true** se a versão for defeituosa.  
A função está implementada no arquivo: src\_c/busca\_binaria.c.  
**int busca\_seq\_ordenada(int arr\[\], int n, int alvo):**  
A função busca em um vetor já ordenado, retornando o indice do elemento encontrado ou **\-1** caso não exista o elemento.  
A função está implementada no arquivo: src\_c/busca\_seq\_orgdenada.c

**void bubble\_sort(int arr\[\], int n):**  
A função implementa o algoritmo Bubble Sort para ordenar o vetor. Também é usado como preparação para evitar contar elementos repetidos.  
A função está implementada no arquivo: src\_c/busca\_seq\_ordenada.c

**int conta\_especialidades\_distintas(int arr\[\], int n)**  
A função ordena o vetor e conta quantos valores únicos existem, usando o **bubble\_sort** para ordenar e evitar contagens duplicadas.  
A função está implementada no arquivo: src\_c/busca\_seq\_ordenada.c

**int recursao(cont char \*str, char alvo)**  
A função conta quantas vezes o caractere **alvo** aparece na string **str**.  
A função está implementada no arquivo: src\_c/recursao.c
