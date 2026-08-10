#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float base, altura, area;
	
	printf("Insira o valor da BASE \n");
	scanf("%f", &base);
	printf("Insira o valor da ALTURA \n");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A area do triangulo e: %.2f\n", area);
	return 0;
}
