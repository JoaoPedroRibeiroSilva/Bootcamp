#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
   setlocale(LC_ALL,"");
 int a = 5, b = 3, c = 10, d = -9;

 printf("\n a soma de %d e %d é = %d \n", a, b, a + b);
  printf("portanto, se pegarmos %d e subtrairmos por %d, o resultado será: %d \n", a + b, c, a + b - c);
  printf("mas se multiplicarmos %d e %d, teremos: %d", a, b, a * b);
  printf("\nmas é claro! dividir %d por %d resultaria em sobras, como  %d \n", c, b, c % b);
  printf("depois de tudo que interpretamos, por ultimo, o valor absoluto  de -9 é %d", abs(d));


}
