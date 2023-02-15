/*    Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que os usuário
não informará valores iguais

[Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]
5        | 8        | 5        | 5        | 3        | 2
3        | 2        | 7        | 1        | 8        | 5
1        | 5        | 2        | 9        | 4        | 6
         |          |          |          |          |
[Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]
8        | 13       | 12       | 14       | 12       | 11
*/

#include <stdio.h>

int main() {
   float value_1, value_2, value_3;
    printf("Digite um número: ");
    scanf("%f", &value_1);
    printf("Digite outro número: ");
    scanf("%f", &value_2);
    printf("Digite um terceiro número: ");
    scanf("%f", &value_3);
    if ((value_1>value_2) && (value_1>value_3))
    {
        printf("O valor %f é maior", value_1);
    } 
    else if ((value_2>value_1) && (value_2>value_3))
    {
        printf("O valor %f é maior", value_2);
    } 
    else if ((value_3>value_1) && (value_3>value_2))
    {
        printf("O valor %f é maior", value_3);
    } 
}