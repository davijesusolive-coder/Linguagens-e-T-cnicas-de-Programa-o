#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	// Exercicio 6 //
	int n;
	printf ("Entre com o valor N: ");
	scanf("%d", &n);
	printf(" o numero %d, seu antecessor %d e seu sucessor %d ", n, n-1, n+1);
	
	
	// Exercicio 1 //
	int idade, anoAtual, anoNascimento;
	
	printf("Digite a Idade: ");
	scanf("%d", &idade);
	
	printf("Digite o Ano Atual: ");
	scanf("%d", &anoAtual);
	
	anoNascimento = anoAtual - idade ;
	
	printf("Ano de nascimento aproximado: %d", anoNascimento);
	
	// Exercicio 10 //
	int a, b, c;
    
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    
    printf("Insira o valor de C: ");
    scanf("%d", &c);
    
    int maiorab = (a+b+abs(a-b)) / 2;
    int maior = (maiorab + c + abs(maiorab - c)) / 2;
    
    printf("%d eh o maior\n", maior);
    
	return 0;
}
