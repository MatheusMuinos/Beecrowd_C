#include<stdio.h>
#include<math.h>

float calculador(int numero, int horas, float pagamento) {
  scanf("%d" "%d" "%f", &numero, &horas, &pagamento);

  float salario = horas * pagamento;

  printf("NUMBER = %d\n", numero);
  printf("SALARY = U$ %.2f\n", salario);

  return 0;
}

int main () {
  int n, h;
  float p;
  calculador(n, h, p);

  return 0;
