#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
  float n = 5, m = 2;

  printf("a m�dia entre %f e %f �: %f", n, m, (n+m) / 2);

}
