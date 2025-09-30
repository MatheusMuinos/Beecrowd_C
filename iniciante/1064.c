#include <stdio.h>

int main () {
	
	float numeros[6];
	int positivos = 0;
	float soma = 0;

	for (int i=0; i<6; i++) {
	    
	    scanf("%f", &numeros[i]);

        if (numeros[i] > 0) {
            positivos ++;
            soma = soma + numeros[i];
        }
	}
	
	printf("%d valores positivos\n", positivos);
	printf("%.1f\n", soma/positivos);

	return 0;
}