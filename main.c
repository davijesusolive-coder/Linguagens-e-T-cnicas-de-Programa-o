#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maiorDois(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int ehPar(int n) {
    return n % 2 == 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void ordenarDecrescente(int v[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (v[j] < v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void exercicio1(void) {
    int v[100];
    int i;

    printf("\n===== EXERCICIO 1 =====\n");

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nNumeros na ordem inversa:\n");

    for (i = 99; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    ordenarDecrescente(v, 100);

    printf("\n\nNumeros do maior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

void exercicio2(void) {
    double numero, mantissa;
    int expoente = 0;

    printf("\n===== EXERCICIO 2 =====\n");
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
        return;
    }

    mantissa = numero;

    while (mantissa >= 10.0) {
        mantissa /= 10.0;
        expoente++;
    }

    while (mantissa < 1.0) {
        mantissa *= 10.0;
        expoente--;
    }

    printf("Notacao cientifica: %.6f x 10^%d\n",
           mantissa, expoente);
}

void exercicio3(void) {
    int n;
    int bits[7];
    int i, quantidade = 0;

    printf("\n===== EXERCICIO 3 =====\n");
    printf("Digite um numero entre 1 e 64: ");
    scanf("%d", &n);

    if (n < 1 || n > 64) {
        printf("Valor invalido. Digite um numero de 1 a 64.\n");
        return;
    }

    while (n > 0) {
        bits[quantidade] = n % 2;
        n /= 2;
        quantidade++;
    }

    printf("Representacao binaria: ");

    for (i = quantidade - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }

    printf("\n");
}

void exercicio4(void) {
    int valor, maior;
    int i;

    printf("\n===== EXERCICIO 4 =====\n");

    printf("Digite o 1o valor: ");
    scanf("%d", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);

        maior = maiorDois(maior, valor);
    }

    printf("%d eh o maior\n", maior);
}

void exercicio5(void) {
    int v[100];
    int i;

    printf("\n===== EXERCICIO 5 =====\n");

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nResultados:\n");

    for (i = 0; i < 100; i++) {
        printf("Numero %d: %d - ", i + 1, v[i]);

        if (ehPar(v[i])) {
            printf("Par");
        } else {
            printf("Impar");
        }

        if (ehPrimo(v[i])) {
            printf(" e primo.\n");
        } else {
            printf(" e nao primo.\n");
        }
    }
}

void exercicio6(void) {
    double x1[10], y1[10];
    double x2[10], y2[10];
    double distancia;
    int i;

    printf("\n===== EXERCICIO 6 =====\n");

    printf("\nDigite as 10 coordenadas x1:\n");
    for (i = 0; i < 10; i++) {
        printf("x1[%d]: ", i);
        scanf("%lf", &x1[i]);
    }

    printf("\nDigite as 10 coordenadas y1:\n");
    for (i = 0; i < 10; i++) {
        printf("y1[%d]: ", i);
        scanf("%lf", &y1[i]);
    }

    printf("\nDigite as 10 coordenadas x2:\n");
    for (i = 0; i < 10; i++) {
        printf("x2[%d]: ", i);
        scanf("%lf", &x2[i]);
    }

    printf("\nDigite as 10 coordenadas y2:\n");
    for (i = 0; i < 10; i++) {
        printf("y2[%d]: ", i);
        scanf("%lf", &y2[i]);
    }

    printf("\nDistancias entre os pontos:\n");

    for (i = 0; i < 10; i++) {
        distancia = sqrt(
            (x2[i] - x1[i]) * (x2[i] - x1[i]) +
            (y2[i] - y1[i]) * (y2[i] - y1[i])
        );

        printf("Distancia %d: %.2f\n", i + 1, distancia);
    }
}

void exercicio7(void) {
    int v[100];
    int i;
    int encontrou = 0;

    printf("\n===== EXERCICIO 7 =====\n");

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nPares consecutivos encontrados:\n");

    for (i = 0; i < 99; i++) {
        if (v[i + 1] == v[i] + 1 ||
            v[i + 1] == v[i] - 1) {

            printf("%d e %d (posicoes %d e %d)\n",
                   v[i], v[i + 1], i + 1, i + 2);

            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum par consecutivo foi encontrado.\n");
    }
}

int main(void) {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();

    printf("\nTodos os exercicios foram executados!\n");

    return 0;
}

