#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
  float n = 5, m = 2;

  printf("a média entre %f e %f é: %f", n, m, (n+m) / 2);

}
