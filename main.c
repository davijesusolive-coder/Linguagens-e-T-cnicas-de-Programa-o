#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double raio, B, b, h;
	
	printf("Informe o valor do raio:");
	scanf("%lf", &raio);
	
	double circulo = 3.141592 * (raio * raio);
	
	printf("CIRCULO: %.2lf\n", circulo);
	
	printf("Informe o valor da Base B:");
	scanf("%lf", &B);
	printf("Informe o valor da Base b:");
	scanf("%lf", &b);
	printf("Informe o valor da Altura h:");
	scanf("%lf", &h);
	
	double trapezio = (B+b) * h / 2;
	
	printf("TRAPEZIO: %.2lf\n", trapezio);
	return 0;
}
