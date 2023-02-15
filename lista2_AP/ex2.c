/*    Faça um algoritmo que leia um número e mostre
se ele é positivo, negativo ou zero.
*/

/*    Construir um algoritmo que dados dois números
escreva o maior.
*/

#include <stdio.h>

int main() 
{
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    if (num>0) 
    {
        printf("%f é positivo. \n", num);
    }
    else
    {
        if (0>num)
        {
            printf("%f é negativo. \n", num);
        }
        else
        {
            printf("Você digitou o número 0, que não é positivo nem negativo. \n");
        }  
    }
}