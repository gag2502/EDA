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
      no *novo = malloc(sizeof(no));
      novo->coluna = coluna;
      novo->valor = valor;
      novo->prox = m->valores[linha]->prox;
      m->valores[linha]->prox = novo;
  }

  void produto_matriz_vetor(matriz *m, int linha, int *vetor){
    int resultante = 0;

    for(no *p=m->valores[linha]->prox;p!=NULL;p=p->prox){
      resultante += vetor[p->coluna] * p->valor;
    }
      printf("%d\n",resultante);
  }

  int main() {

    int m,n;
    int linha,coluna,valor;
    int *vetor;


    scanf("%d %d",&m,&n);

    vetor = malloc(n*sizeof(int));
    matriz *mat = malloc(m*sizeof(matriz));

    for(int i = 0; i < n;i++){
      scanf("%d",&vetor[i]);
    }

    inicializa(m,n,mat);

    while (scanf("%d %d %d",&linha,&coluna,&valor)!= EOF){
      inserir(linha,coluna,valor,mat);
    }

     for(int j = 0; j < m; j++){
       produto_matriz_vetor(mat,j,vetor);
     }

}
