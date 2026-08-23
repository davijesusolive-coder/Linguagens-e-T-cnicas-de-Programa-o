#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

//  EXERCICIO 1 
void exercicio1(void)
{
    int primeiro, segundo;

    printf("===== Exercicio 1 =====\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &segundo);

    printf("Ordem inversa: %d %d\n\n", segundo, primeiro);
}

// EXERCICIO 2
void exercicio2(void)
{
    double valor, mantissa;
    int expoente = 0;

    printf("===== Exercicio 2 =====\n");
    printf("Digite um valor double positivo: ");
    scanf("%lf", &valor);

    mantissa = valor;

    while (mantissa >= 10.0)
    {
        mantissa /= 10.0;
        expoente++;
    }

    while (mantissa < 1.0)
    {
        mantissa *= 10.0;
        expoente--;
    }

    printf("Notacao cientifica: %.2f x 10^%d\n\n", mantissa, expoente);
}

//  EXERCICIO 5 
void exercicio5(void)
{
    double v1, v2, v3, v4;
    double soma, media, produtorio;

    printf("===== Exercicio 5 =====\n");
    printf("Digite 4 valores:\n");

    printf("Valor 1: ");
    scanf("%lf", &v1);

    printf("Valor 2: ");
    scanf("%lf", &v2);

    printf("Valor 3: ");
    scanf("%lf", &v3);

    printf("Valor 4: ");
    scanf("%lf", &v4);

    soma = v1 + v2 + v3 + v4;
    media = soma / 4.0;
    produtorio = v1 * v2 * v3 * v4;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n\n", produtorio);
}

}
	
	// Exercicio 3 //
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2;
	
	printf("Entre com o valor de N: ");
	scanf("%d", &n);
	
	bit64 = n%2;
	resultado = n/2;
	
	bit32 = resultado%2;
	resultado = resultado/2;
	
	bit16 = resultado%2;
	resultado = resultado/2;
	
	bit8 = resultado%2;
	resultado = resultado/2;
	
	bit4 = resultado%2;
	resultado = resultado/2;
	
	bit2 = resultado%2;
	resultado = resultado/2;
	
	printf("O número %d em binário = %d%d%d%d%d%d ", n, resultado%2, bit2, bit4, bit8, bit16, bit32, bit64 );
	
	// Exercicio 8 //
	int x1, x2, y1, y2;
	float dist;
	
	printf("Entre com os valores para p1(x1,y1)");
	scanf("%d", &x1);
	scanf("%d", &y1);
	
	printf("Entre com os valores para p2(x2,y2)");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	float cat1 = pow(x2-x1, 2);
	float cat2 = pow(y2-y1, 2);
	
	dist = sqrt((cat1+cat2), 2);
	
	printf("Distancia: (%d,%d)", x1,y1);
	
	
	return 0;
}

// Exerciício 4 //

int main(){
    char nome[100];
    double salarioFixo, vendas, comissao, total;
    
    scanf("%s", nome);
    scanf("%lf %lf", &salarioFixo, &vendas);
    
    comissao=vendas*0.15;
    total= salarioFixo + comissao;
    
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}

// Exercício 7 //

int main(){
    double raio, volume;
    double pi=3.14159;
    
    scanf("%lf", &raio);
    
    volume = (4.0/3.0) * pi * raio * raio * raio;
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}

// Exercício 6 //

void exercicio6(void)
{
    int diasTotais, anos, meses, dias;

    printf("===== Exercicio 6 (URI 1020) =====\n");
    printf("Digite a idade em dias: ");
    scanf("%d", &diasTotais);

    anos = diasTotais / 365;

    diasTotais = diasTotais % 365;

    meses = diasTotais / 30;

    dias = diasTotais % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n\n", dias);
}
