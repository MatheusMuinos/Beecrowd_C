#include<stdio.h>
#include<math.h>

int conversor (int *anos, int *meses, int *dias) {

    int valor;
    scanf ("%d", &valor);

    *anos = valor / 365;
    int resto = valor % 365;

    *meses = resto / 30;
    resto = resto % 30;

    *dias = resto;

    return 0;
}


int main () {

    int a, m, d;
    conversor (&a, &m, &d);

    printf ("%d ano(s)\n", a);
    printf ("%d meses(s)\n", m);
    printf ("%d dia(s)\n", d);

    return 0;
}