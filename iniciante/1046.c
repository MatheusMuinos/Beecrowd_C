#include<stdio.h>

void duracao (int ini, int fim) {

  if (ini > fim) {
    int tempo;

    tempo = (24 - ini) + fim;

    printf ("O JOGO DUROU %d HORA(S)\n", tempo);

  } else if (ini < fim) {

    int tempo = fim - ini;

    printf ("O JOGO DUROU %d HORA(S)\n", tempo);

  } else if (ini == fim) {

    printf ("O JOGO DUROU 24 HORA(S)\n");
  }
}


int main () {

  int a, b;

  scanf ("%d %d", &a, &b);

  duracao(a,b);

  return 0;
}