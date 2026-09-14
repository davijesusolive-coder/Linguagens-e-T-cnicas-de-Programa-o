#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d;
	
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	
	printf("Insira o valor de C: ");
	scanf("%d", &c);
	
	printf("Insira o valor de D: ");
	scanf("%d", &d);
	
	printf("Permutação dos valores para a ordem (B,D,A,C): ");
	printf("%d %d %d %d", b, d, a, c);
	return 0;
}
