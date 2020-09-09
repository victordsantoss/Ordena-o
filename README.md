# :computer: Ordenation algorithms 
Um algoritmo de ordenação na ciência da computação é um algoritmo que coloca os elementos de uma sequência de dados em uma determinada ordem, ou seja, realiza sua ordenação total ou parcial.

## :warning: O que será visto? 
1. Algoritimos de Ordenação Simples
    * Selection Sort
    * Bubble Sort
    * Insertion Sort
2. Algoritimos de Ordenação Otimizados
    * Shell Sort
    * Quick Sort
    * Merge Sort 
    
## :question: O que diferencia um algoritimo de outro? 
As principais diferenças entre os exemplos acima estão relacionadas a sua complexidade, estabilidade e principalmente seu método de ordenação.

## :grey_question: Selection Sort?
É um algoritimo que tem sua complexidade no pior, médio e melhor caso de O(n²). Não é um algoritimo estável, ou seja, items de mesma chave tem suas posições trocadas durante a ordenação. O seu funcionamento consiste em selecionar o menor item e colocar na primeira posição, selecionar o segundo menor e colocar na segunda posição, estes passos são feitos até que reste um único elemento e a ordenação esteja completa.

## :grey_question: Bubble Sort?
É um algoritimo dos mais simples, tem sua complexidade no pior, médio e melhor caso de O(n²). É um algoritimo estável, ou seja, garante que itens com chaves idênticas permaneçam na mesma posição. A respeito do seu funcionamento, como o nome já diz, funciona como uma bolha, percorrendo todo o vetor fazendo comparações elemento à elemento e mudando, se necessário, suas posições. 

## :grey_question: Insertion Sort?
É um algoritimo que tem sua complexidade no pior e no médio caso de O(n²), já no melhor caso sua complexidade é de O(n). É um método de ordenaço estável e seu funcionamento se baseia em percorrer todo o vetor da esquerda para a direita e à medida que avança, vai ordenando os elementos à esquerda fazendo a inserção dos itens nos locais específicos. 

## :grey_question: Shell Sort? 
Criado por Donald Shell em 1959, o método Shell Sort é uma extensão do algoritmo de ordenação por inserção. Ele permite a troca de registros distantes um do outro, diferente do algoritmo de ordenação por inserção que possui a troca de itens adjacentes para determinar o ponto de inserção. A complexidade do algoritmo é desconhecida, ninguém ainda foi capaz de encontrar uma fórmula fechada para sua função de complexidade e o método não é estável.

Os itens separados de h posições (itens distantes) são ordenados: o elemento na posição x é comparado e trocado (caso satisfaça a condição de ordenação) com o elemento na posição x-h. Este processo repete até h=1, quando esta condição é satisfeita o algoritmo é equivalente ao método de inserção.

Fonte: [Treina Web](https://www.treinaweb.com.br/blog/conheca-os-principais-algoritmos-de-ordenacao/).

## :grey_question: Quick Sort? 
O Algoritmo Quicksort, criado por C. A. R. Hoare em 1960, é o método de ordenação interna mais rápido que se conhece para uma ampla variedade de situações. Sua complexidade no pior caso é de O(n²) e no melhor e médio caso é de O(n log n). O funcionamento desse alogítimo se baseia em divisão e conquista, a ideia básica é dividir o problema de ordenar um conjunto de n elementos em dois problemas menores. A divisão desses dois problemas menores é feita por meio de um elemento pivô, os elementos menores que ele ficam a esquerda e os maiores a direita, o pivô é mudado em cada interação até que todos os elementos, tanto da esquerda como da direita estejam ordenados. Este não é um algoritimo estável. 

## :grey_question: Merge Sort? 
Criado em 1945 pelo matemático americano John Von Neumann o Mergesort é um exemplo de algoritmo de ordenação que faz uso da estratégia “dividir para conquistar” para resolver problemas. É um método estável e possui complexidade C(n) = O(n log n) para todos os casos.

Esse algoritmo divide o problema em pedaços menores, resolve cada pedaço e depois junta (merge) os resultados. O vetor será dividido em duas partes iguais, que serão cada uma divididas em duas partes, e assim até ficar um ou dois elementos cuja ordenação é trivial.

Para juntar as partes ordenadas os dois elementos de cada parte são separados e o menor deles é selecionado e retirado de sua parte. Em seguida os menores entre os restantes são comparados e assim se prossegue até juntar as partes.
Fonte: [Treina Web](https://www.treinaweb.com.br/blog/conheca-os-principais-algoritmos-de-ordenacao/).

## :computer: Como executar os programas usando o sistema Linux?
> Primero passo: Clonar este repositório
     
    git clone https://github.com/victordsantoss/algoritimos_de_ordenacao.git
> Acesse a pasta raiz do repositório

    cd ../../algoritimos_de_ordenacao
> Escolha um arquivo de preferência e execute o processo de compilação e execução
    
    gcc nome_arquivo.c -o bin
    ./bin

