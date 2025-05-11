#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca dos acentos

void main (){
    //permite usar acentos nas mensagens
  setlocale(LC_ALL, "");
  printf("olá \n");

  //lendo valores inteios
  int a = 8;
  printf("o valor de a é: %d \n", a);
  scanf("%d", &a);
  printf("o valor mudou para %d \n", a);

  //lendo valores quebrados
  float b = 5.5;
   printf("o valor de b é: %f \n", b);
   scanf("%f", &b);
   printf("o valor mudou para %f", b);

   //lendo letra unitária
    char letra = 't';
   printf("\n o valor de c é: %d \n", letra);
   fflush(stdin);
   scanf("%c", &letra);
   printf("o valor de c mudou para %c", letra);
}
