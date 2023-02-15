/*    Construir um algoritmo que dados dois números
escreva o maior.
*/

#include <stdio.h>

int main() 
{
    float num_1, num_2;
    printf("Digite um número: ");
    scanf("%f", &num_1);
    printf("Agora digite um segundo número: ");
    scanf("%f", &num_2);
    if (num_1>num_2) 
    {
        printf("%f é maior que %f \n", num_1, num_2);
    }
    else
    {
        if (num_2>num_1)
        {
            printf("%f é maior que %f \n", num_2, num_1);
        }
        else
        {
            printf("Os dois números digitados são iguais. \n");
        }  
    }
}