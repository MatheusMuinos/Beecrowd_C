#include<stdio.h>
#include<math.h>


float calculador(double fixo, double vendas) {
      double total, comissao;

      comissao = vendas * 0.15;
      total = fixo + comissao;

      printf("TOTAL = R$ %.2lf\n", total);

      return 0;
    }

int main() {
    char nome[10];
    double f, v;
    scanf("%s", nome);
    scanf("%lf" "%lf", &f, &v);
    calculador (f, v);

    return 0;

    }
