/*    Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
mês com 30 dias. 
*/

#include <stdio.h>

int main() {
    int anos, meses, dias, total;
    printf("Digite o número de anos: ");
    scanf("%d", &anos);
    printf("Digite o número de meses: ");
    scanf("%d", &meses);
    printf("Digite o número de dias: ");
    scanf("%d", &dias);
    total = (anos*365) + (meses*30) + dias;
    printf("Você viveu um total de %d dias", total);
};