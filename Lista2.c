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

// EXERCICIO 2 
void exercicio2(void)
{
    double velocidadeKmH, velocidadeMs;
 
    printf("===== Exercicio 2 =====\n");
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidadeKmH);
 
    velocidadeMs = velocidadeKmH / 3.6;
 
    printf("Velocidade em m/s: %.2f\n\n", velocidadeMs);
}
 
// EXERCICIO 3 
void exercicio3(void)
{
    double valorReais, cotacaoDolar, valorDolares;
 
    printf("===== Exercicio 3 =====\n");
    printf("Digite o valor em reais: ");
    scanf("%lf", &valorReais);
 
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacaoDolar);
 
    valorDolares = valorReais / cotacaoDolar;
 
    printf("Valor em dolares: %.2f\n\n", valorDolares);
}
 
// EXERCICIO 4 
void exercicio4(void)
{
    double celsius, fahrenheit;
 
    printf("===== Exercicio 4 =====\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
 
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
 
    printf("Temperatura em Fahrenheit: %.2f\n\n", fahrenheit);
}
 
// EXERCICIO 5 
void exercicio5(void)
{
    const double PI = 3.141592;
    double graus, radianos;
 
    printf("===== Exercicio 5 =====\n");
    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);
 
    radianos = graus * PI / 180.0;
 
    printf("Angulo em radianos: %.6f\n\n", radianos);
}
 
// EXERCICIO 7
void exercicio7(void)
{
    const double PREMIO_TOTAL = 780000.00;
 
    double primeiroGanhador = PREMIO_TOTAL * 0.46;
    double segundoGanhador = PREMIO_TOTAL * 0.32;
   
    double terceiroGanhador = PREMIO_TOTAL - primeiroGanhador - segundoGanhador;
 
    printf("===== Exercicio 7 (Premio) =====\n");
    printf("Primeiro ganhador: R$ %.2f\n", primeiroGanhador);
    printf("Segundo ganhador: R$ %.2f\n", segundoGanhador);
    printf("Terceiro ganhador: R$ %.2f\n\n", terceiroGanhador);
}
 
// EXERCICIO 8 
void exercicio8(void)
{
    int segundosTotais, horas, minutos, segundos, resto;
 
    printf("===== Exercicio 8 (URI 1019) =====\n");
    printf("Digite a duracao em segundos: ");
    scanf("%d", &segundosTotais);
 
    horas = segundosTotais / 3600;
 
    resto = segundosTotais % 3600;

    minutos = resto / 60;
 
    segundos = resto % 60;
 
    printf("%d:%d:%d\n\n", horas, minutos, segundos);
}
 
// EXERCICIO 9 
void exercicio9(void)
{
    const double KM_POR_LITRO = 12.0;
    double tempoHoras, velocidadeMedia, distancia, litros;
 
    printf("===== Exercicio 9 (URI 1017) =====\n");
    printf("Digite o tempo de viagem (em horas): ");
    scanf("%lf", &tempoHoras);
 
    printf("Digite a velocidade media (em km/h): ");
    scanf("%lf", &velocidadeMedia);
 
    distancia = tempoHoras * velocidadeMedia;
 
    litros = distancia / KM_POR_LITRO;
 
    printf("Litros necessarios: %.3f\n\n", litros);
}
 
