#include<stdio.h>

void verifica_e_calcula ( float a, float b, float c) {
	
	if (a + b > c && a + c > b && b + c > a) {
		float perimetro;
		
		perimetro = a + b + c;
		printf ("Perimetro = %.1f\n", perimetro);
		
	} else {
		
		float area;
		
		area = ((a + b) * c) / 2;
		printf ("Area = %.1f\n", area);
	}
}



int main () {
	
	float A, B, C;
	scanf ("%f %f %f", &A, &B, &C);
	verifica_e_calcula (A, B, C);
	
	return 0;
}