#include <stdio.h>

/*Leia 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2
notas de um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A tem
peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto � 11). Assuma que cada
nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
*/


int main(){
    double A = 0, B = 0, MEDIA = 0;

    scanf("%lf\n%lf", &A , &B);

    MEDIA = (A * 3.5 + B * 7.5) / 11;

    printf("MEDIA = %.5lf\n", MEDIA);


    return 0;
}
