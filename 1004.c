 #include <stdio.h>

 //Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.

 int main(){
     int num1, num2, PROD;

     scanf("%d\n%d", &num1, &num2);

     PROD = num1 * num2;

     printf("PROD = %d\n", PROD);

    return 0;
 }
