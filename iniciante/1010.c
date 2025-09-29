#include<stdio.h>
#include<math.h>

// codigo 	unidades 	preco por unidade 		DE CADA PRODUTO	
  // calcular o preço total de cada produto ( qquantidade de unidades * preço) e depois somar eles e imprimir o valor total


float soma (float x, float y) {

  float total;
  total = x + y;

  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
} 

float produtofinal (float *produto1, float *produto2) {

  int codigo1;
  int quantidade1;
  float preco1;
  scanf ("%d" "%d" "%f", &codigo1, &quantidade1, &preco1);

  *produto1= quantidade1 * preco1;

  int codigo2;
  int quantidade2;
  float preco2;
  scanf ("%d" "%d" "%f", &codigo2, &quantidade2, &preco2);

  *produto2 = quantidade2 * preco2;

  return 0;
}



int main () {

  float a, b;
  produtofinal(&a, &b);
  soma(a, b);

  return 0;
}