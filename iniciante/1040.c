#include <stdio.h>

void calcula_media(float *n1, float *n2, float *n3, float *n4) {
 
    double media = ((*n1 * 2) + (*n2 * 3) + (*n3 * 4) + (*n4 * 1)) / 10.0;
    printf("Media: %.1f\n", media);


    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        double exame;
        scanf("%lf", &exame);
        printf("Nota do exame: %.1f\n", exame);

       
        double mediaFinal = (media + exame) / 2.0;

        if (mediaFinal >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
      printf("Media final: %.1f\n", mediaFinal);
    }
}

int main() {
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    calcula_media(&n1, &n2, &n3, &n4);

    return 0;
}
