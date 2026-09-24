#include <stdio.h>
#include <math.io>

int main(void)
{

  //Exercicio 05: Simulador de Saque (Caixa Eletronico)
    int valor;
    int qtd100, qtd50, qtd10, qtd5, qtd2, qtd1;
 
    printf("Digite o valor do saque: ");
    scanf("%d", &valor);
 
    qtd100 = valor / 100;
    valor = valor % 100;
 
    qtd50 = valor / 50;
    valor = valor % 50;
 
    qtd10 = valor / 10;
    valor = valor % 10;
 
    qtd5 = valor / 5;
    valor = valor % 5;
 
    qtd2 = valor / 2;
    valor = valor % 2;
 
    qtd1 = valor / 1;
 
    printf("\n=== Resumo do saque ===\n");
    printf("Notas de R$ 100: %d\n", qtd100);
    printf("Notas de R$  50: %d\n", qtd50);
    printf("Notas de R$  10: %d\n", qtd10);
    printf("Notas de R$   5: %d\n", qtd5);
    printf("Notas de R$   2: %d\n", qtd2);
    printf("Notas de R$   1: %d\n", qtd1);

//Exercicio 06: Operacao ENIAC
double v0, anguloGraus, anguloRad;
    double g = 9.8, k = 0.5;
    double vx, vy, x, y, t, dt;
    double ax, ay;
 
    printf("Digite a velocidade inicial (v0): ");
    scanf("%lf", &v0);
 
    printf("Digite o angulo de lancamento (graus): ");
    scanf("%lf", &anguloGraus);
 
    anguloRad = anguloGraus * (PI / 180.0);
 
    vx = v0 * cos(anguloRad);
    vy = v0 * sin(anguloRad);
 
    x = 0.0;
    y = 0.0;
    t = 0.0;
    dt = 0.01;
 
    do
    {
        ax = -k * vx;
        ay = -g - k * vy;
 
        vx = vx + ax * dt;
        vy = vy + ay * dt;
 
        x = x + vx * dt;
        y = y + vy * dt;
 
        t = t + dt;
    } while (y > 0.0);
 
    printf("\nAlcance maximo: %.2f metros\n", x);
    printf("Tempo de voo: %.2f segundos\n", t);


//Exercicio 07: recebe o salario bruto e retorna o valor do desconto
  double calcularINSS(double salarioBruto)
{
    double aliquota;
 
    if (salarioBruto <= 1412.00)
    {
        aliquota = 0.075;
    }
    else if (salarioBruto <= 2666.68)
    {
        aliquota = 0.09;
    }
    else if (salarioBruto <= 4000.03)
    {
        aliquota = 0.12;
    }
    else
    {
        aliquota = 0.14; // faixa mais alta, conforme tabela simplificada
    }
 
    return salarioBruto * aliquota;
}

//Exercicio 08: recebe o salario-base (bruto - INSS) e retorna o valor do IRPF, usando a formula: (Salario Base * Aliquota) - Deducao
  double calcularIRPF(double salarioBase)
{
    double aliquota, deducao;
 
    if (salarioBase <= 2259.20)
    {
        return 0.0; // isento
    }
    else if (salarioBase <= 2826.65)
    {
        aliquota = 0.075;
        deducao = 169.44;
    }
    else if (salarioBase <= 3751.05)
    {
        aliquota = 0.15;
        deducao = 381.44;
    }
    else if (salarioBase <= 4664.68)
    {
        aliquota = 0.225;
        deducao = 662.77;
    }
    else
    {
        aliquota = 0.275;
        deducao = 896.00;
    }
 
    return (salarioBase * aliquota) - deducao;
}


//Exercicio 09: logica principal - le horas e valor da hora, calcula o salario bruto, chama as funcoes de INSS e IRPF, calcula o liquido e imprime o contra-cheque formatado.
  int main(void)
{
    double valorHora, horasTrabalhadas;
    double salarioBruto, descontoINSS, salarioBase, descontoIRPF, salarioLiquido;
 
    printf("Digite o valor da hora trabalhada: ");
    scanf("%lf", &valorHora);
 
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%lf", &horasTrabalhadas);
 
    salarioBruto = horasTrabalhadas * valorHora;
    descontoINSS = calcularINSS(salarioBruto);
    salarioBase = salarioBruto - descontoINSS;
    descontoIRPF = calcularIRPF(salarioBase);
    salarioLiquido = salarioBruto - descontoINSS - descontoIRPF;
 
    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %.2f\n", salarioBruto);
    printf(" (-) Desconto INSS:               R$ %.2f\n", descontoINSS);
    printf(" (-) Desconto IRPF:               R$ %.2f\n", descontoIRPF);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %.2f\n", salarioLiquido);
    printf("======================================================\n");
  
    return 0;
}
