#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    printf("oi!! \n");

    int a = 8;
    printf("o valor inicial de a é: %d\n", a);
    printf("digite um novo valor inteiro para a: ");
    if (scanf("%d", &a) != 1) {
        printf("entrada inválida\n");
        return 1;
    }
    printf("o valor de a mudou para: %d\n", a);

    float b = 5.5f;
    printf("o valor inicial de b é: %.2f\n", b);
    printf("digite um novo valor decimal para b: ");
    if (scanf("%f", &b) != 1) {
        printf("entrada inválida\n");
        return 1;
    }
    printf("o valor de b mudou para: %.2f\n", b);

    return 0;
}
