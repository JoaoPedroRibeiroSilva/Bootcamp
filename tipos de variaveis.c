#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca dos acentos

void main (){
    //permite usar acentos nas mensagens
  setlocale(LC_ALL, "");
  printf("ol� \n");

  //lendo valores inteios
  int a = 8;
  printf("o valor de a �: %d \n", a);
  scanf("%d", &a);
  printf("o valor mudou para %d \n", a);

  //lendo valores quebrados
  float b = 5.5;
   printf("o valor de b �: %f \n", b);
   scanf("%f", &b);
   printf("o valor mudou para %f", b);

   //lendo letra unit�ria
    char letra = 't';
   printf("\n o valor de c �: %d \n", letra);
   fflush(stdin);
   scanf("%c", &letra);
   printf("o valor de c mudou para %c", letra);
}
