/*    Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a
medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5.

            [Entrada]   |       [Entrada]     |     [Entrada]
    3 (número de lados) | 4 (número de lados) | 5 (número de lados)
    2 (medida do lado)  | 5 (medida do lado)  |
                        |                     |
            [Saída]     |       [Saída]       |     [Saída]
           Triângulo    |       Quadrado      |    Pentágono
        6 (perímetro)   |       25 (área)     |

*/

#include <stdio.h>

int main() {
        int num_lados, medida_lado, perimetro, area;
        printf("Digite o número de lados do polígono: ");
        scanf("%d", &num_lados);
        if ((num_lados=3) || (num_lados=4))
        {
                printf("Digite a medida do lado: ");
                scanf("%d", &medida_lado);
                perimetro = (medida_lado*num_lados);
                area = (medida_lado*medida_lado);
        }
        if (num_lados=3) {
                printf("Seu polígono é um triângulo com perímetro %d.\n", perimetro);
        } else if (num_lados=4) {
                printf("Seu polígono é um quadrado com área %d.\n", area);
        } else if (num_lados=5) {
                printf("Seu polígono é um pentágono.\n");
        } else {
                printf("Valores inválidos.\n");
        }
}
