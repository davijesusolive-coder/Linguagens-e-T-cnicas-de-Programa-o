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

// ===================== EXERCICIO 2 =====================
// Le uma velocidade em km/h e converte para m/s
// Formula: M = K / 3.6 (fator de conversao padrao entre as duas unidades)
void exercicio2(void)
{
    double velocidadeKmH, velocidadeMs;
 
    printf("===== Exercicio 2 =====\n");
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidadeKmH);
 
    velocidadeMs = velocidadeKmH / 3.6;
 
    printf("Velocidade em m/s: %.2f\n\n", velocidadeMs);
}
 
// ===================== EXERCICIO 3 =====================
// Le um valor em reais e a cotacao do dolar, e imprime o valor em dolares
void exercicio3(void)
{
    double valorReais, cotacaoDolar, valorDolares;
 
    printf("===== Exercicio 3 =====\n");
    printf("Digite o valor em reais: ");
    scanf("%lf", &valorReais);
 
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacaoDolar);
 
    // Quantos dolares "cabem" dentro do valor em reais, na cotacao informada
    valorDolares = valorReais / cotacaoDolar;
 
    printf("Valor em dolares: %.2f\n\n", valorDolares);
}
 
// ===================== EXERCICIO 4 =====================
// Le uma temperatura em graus Celsius e converte para Fahrenheit
// Formula: F = C * (9.0/5.0) + 32.0
void exercicio4(void)
{
    double celsius, fahrenheit;
 
    printf("===== Exercicio 4 =====\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
 
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
 
    printf("Temperatura em Fahrenheit: %.2f\n\n", fahrenheit);
}
 
// ===================== EXERCICIO 5 =====================
// Le um angulo em graus e converte para radianos
// Formula: R = G * PI / 180, com PI = 3.141592
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
 
// ===================== EXERCICIO 7 (Premio) =====================
// Divide um premio fixo de R$780.000,00 entre 3 ganhadores:
// o primeiro recebe 46%, o segundo 32%, e o terceiro fica com o restante (22%)
// Obs: o valor total ja e conhecido no enunciado, entao nao ha leitura de dados aqui
void exercicio7(void)
{
    const double PREMIO_TOTAL = 780000.00;
 
    double primeiroGanhador = PREMIO_TOTAL * 0.46;
    double segundoGanhador = PREMIO_TOTAL * 0.32;
    // O terceiro ganhador fica com o que sobrar dos outros dois (garante que
    // a soma bate exatamente com o total, mesmo com eventuais arredondamentos)
    double terceiroGanhador = PREMIO_TOTAL - primeiroGanhador - segundoGanhador;
 
    printf("===== Exercicio 7 (Premio) =====\n");
    printf("Primeiro ganhador: R$ %.2f\n", primeiroGanhador);
    printf("Segundo ganhador: R$ %.2f\n", segundoGanhador);
    printf("Terceiro ganhador: R$ %.2f\n\n", terceiroGanhador);
}
 
// ===================== EXERCICIO 8 (URI 1019) =====================
// Le a duracao de um evento em segundos e converte para horas:minutos:segundos
void exercicio8(void)
{
    int segundosTotais, horas, minutos, segundos, resto;
 
    printf("===== Exercicio 8 (URI 1019) =====\n");
    printf("Digite a duracao em segundos: ");
    scanf("%d", &segundosTotais);
 
    // Quantas horas "inteiras" cabem no total de segundos
    horas = segundosTotais / 3600;
 
    // Segundos restantes depois de tirar as horas completas
    resto = segundosTotais % 3600;
 
    // Quantos minutos "inteiros" cabem no que sobrou
    minutos = resto / 60;
 
    // O que sobra depois dos minutos completos vira os segundos finais
    segundos = resto % 60;
 
    printf("%d:%d:%d\n\n", horas, minutos, segundos);
}
 
// ===================== EXERCICIO 9 (URI 1017) =====================
// Calcula quantos litros de combustivel sao gastos numa viagem, sabendo que
// o carro faz 12 km por litro. Recebe o tempo (em horas) e a velocidade
// media (em km/h) para calcular a distancia percorrida e, entao, os litros
void exercicio9(void)
{
    const double KM_POR_LITRO = 12.0;
    double tempoHoras, velocidadeMedia, distancia, litros;
 
    printf("===== Exercicio 9 (URI 1017) =====\n");
    printf("Digite o tempo de viagem (em horas): ");
    scanf("%lf", &tempoHoras);
 
    printf("Digite a velocidade media (em km/h): ");
    scanf("%lf", &velocidadeMedia);
 
    // Distancia = tempo * velocidade (formula basica de MRU)
    distancia = tempoHoras * velocidadeMedia;
 
    // Litros necessarios = distancia percorrida dividida pelo rendimento do carro
    litros = distancia / KM_POR_LITRO;
 
    printf("Litros necessarios: %.3f\n\n", litros);
}
 
