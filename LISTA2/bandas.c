/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>
#include <string.h>

struct tipoBanda {
  char nome[80];
  int ano;
};

struct tipoShow {
  char nome[80];
  int qtd;
  struct tipoBanda bandas[100];
};

void pesquisarNomeBanda ( char pesquisa [80] , struct tipoShow shows [50] , int n ) ;

int main (){
  char pesquisa[80];
  struct tipoShow shows[50];

  // Exemplo 1
  strcpy (shows[0].nome, "Porao do rock");
  shows[0].qtd = 3;
  strcpy (shows[0].bandas[0].nome, "Ursa");
  shows[0].bandas[0].ano = 2018;
  strcpy (shows[0].bandas[1].nome, "BellRays");
  shows[0].bandas[1].ano = 2007;
  strcpy (shows[0].bandas[2].nome, "Estamira");
  shows[0].bandas[2].ano =  2010;

  strcpy (shows[1].nome, "Lollapalooza");
  shows[1].qtd = 5;
  strcpy (shows[1].bandas[0].nome, "Foo Fighters");
  shows[1].bandas[0].ano = 2012;
  strcpy (shows[1].bandas[1].nome, "Flume");
  shows[1].bandas[1].ano = 2017;
  strcpy (shows[1].bandas[2].nome, "Motolov");
  shows[1].bandas[2].ano =  2015;
  strcpy (shows[1].bandas[3].nome, "Iza");
  shows[1].bandas[3].ano =  2019;
  strcpy (shows[1].bandas[4].nome, "Silva");
  shows[1].bandas[4].ano =  2014;

  strcpy (shows[2].nome, "Rock in Rio");
  shows[2].qtd = 3;
  strcpy (shows[2].bandas[0].nome, "Iron Maiden");
  shows[2].bandas[0].ano = 1985;
  strcpy (shows[2].bandas[1].nome, "Claudia Leite");
  shows[2].bandas[1].ano = 2011;
  strcpy (shows[2].bandas[2].nome, "Foo Fighters");
  shows[2].bandas[2].ano = 2019;

//  scanf (" %s", pesquisa);
  // scanf("%s %d %s %d", bandas.nome, &bandas.ano, shows.nome, &shows.qtd);
  pesquisarNomeBanda ("Iron Maiden", shows, 3);

}

void pesquisarNomeBanda (char pesquisa[80], struct tipoShow shows[50], int n) {

  for (int i = 0; i <= n; i++){
    for(int j = 0; j <= 5; j++){
      if(shows[i].bandas[j].nome == pesquisa) 
        printf("%s\n",pesquisa);
      else
        printf("Não existe\n");
    }
  }
}

/*Nessa questão eu pensei: se foram cadastrados 5 shows, então a pesquisa só precisa
ter 5 repetições. Pesquisa pelos nomes cadastrados e compara com o nome digitado.
Se o nome cadastrado for igual ao nome da banda, então exibe o nome e o ano cadastrados.
Os problemas: Eu teria que criar uma struct "bandas" que pode cadastrar no máximo
100 bandas, daí os shows teriam bandas. Como acessar uma struct dentro de outra struct?
Daí, eu teria que verificar se dentro daquelas 100 ou menos bandas cadastradas existe
uma banda com o nome cadastrado. Para isso, eu precisaria de um novo laço para percorrer
toda a lista de bandas e verificar se o nome buscado existe. Beleza!
Eu posso criar uma função que verifica se aquele nome de banda foi cadastrado, e retornar
1 para sim e 0 para não. Daí antes de verificar o nome da banda eu verifico primeiro se
ela exite. Caso a função retorne 0 eu posso exibir a mensagem de validação.
Mas, para isso eu preciso saber como percorrer um vetor de structs, verificando apenas
se o nome existe em alguma das posições*/
