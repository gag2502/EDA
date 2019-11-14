  #include <stdio.h>
  #include <stdlib.h>

  typedef struct no {
    int coluna;
    int valor;
    struct no *prox;
  } no;

  typedef struct matriz {
    int linhas; //m
    int colunas; //n
    no **valores;
  } matriz;

  void inicializa (int linhas, int colunas, matriz *m){
    m->linhas = linhas;
    m->colunas = colunas;
    m->valores = malloc(linhas *sizeof(no*));

    for(int i = 0; i < linhas; i++){
      m->valores[i] = malloc(sizeof(no));
      m->valores[i]->prox = NULL;
    }
 }

  void inserir(int linha, int coluna, int valor, matriz *m){
    no *anterior = m->valores[linha];
    no *atual = anterior->prox;

    while(atual!=NULL && atual->coluna < coluna){
      anterior = atual;
      atual = atual->prox;
    }

    //elemento não existe
    if(atual == NULL || atual->coluna > coluna){
      no *novo = malloc(sizeof(no));
      novo->coluna = coluna;
      novo->valor = valor;
      novo->prox = atual;
      anterior->prox = novo;
    } else {
      //elemento existe
      if (valor != 0) //valor a ser inserido é diferente de 0
        atual->valor = valor;
      else{
        anterior->prox = atual->prox;
        free(atual);
      }
    }
  }

  void produto_matriz_vetor(matriz *m, int linha, int coluna, int *vetor){
    int resultante;
    int i = 0;
    no *temp;

    //todas as colunas da linha passada como parametro
    while( temp->coluna > coluna){
      resultante[i] += vetor[i] * m->valores[linha];
      i++;
      m->valores[linha]->prox; // prox coluna da mesma linha
    }
    printf("%d\n",resultante);

  }

  int main() {

    int m,n;
    int linha,coluna,valor;
    int *vetor;
    matriz *mat;
    int j;

    scanf("%d %d",&m,&n);

    vetor = malloc(n*sizeof(int));

    for(int i = 0; i < n;i++){
      scanf("%d",&vetor[i]);
    }

    while (scanf("%d %d %d",&linha,&coluna,&valor)!= EOF){
      inserir(linha,coluna,valor,mat);
    }

    while(j > n){
      produto_matriz_vetor(mat,m,n,&vetor[j]);
      j++;
    }
}
