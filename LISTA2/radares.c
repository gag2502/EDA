/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include "stdio.h"

double calculaVelocidadeMedia(int tA, int tB, double distancia);
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima);

double calculaVelocidadeMedia(int tA, int tB, double distancia) {

  double velocidadeMedia;
  double hora;
  hora = (tB - tA) / 3600.0;
  velocidadeMedia = distancia/hora;
  return velocidadeMedia;

}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {

  double velocidadeMedia;
  velocidadeMedia = calculaVelocidadeMedia(tA,tB,distancia);
  if (velocidadeMedia > velocidadeMaxima)
    return 1;
  else
    return 0;
}
