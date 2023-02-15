/*    Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso.
Caso o número de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.
Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
OBS: Considere que o usuário poderá informar qualquer valor para o número de lados.

         [Entrada]      |          [Entrada]        |     [Entrada]
    0 (número de lados) |    6 (número de lados)    | -1 (número de lados)
                        |                           |
         [Saída]        |           [Saída]         |     [Saída]
    NÃO É UM POLÍGONO   | POLÍGONO NÃO IDENTIFICADO | NÃO É UM POLÍGONO
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
        if (num_lados<3){
                printf("Não é um polígono!\n");
        } else if (num_lados=3) {
                printf("Seu polígono é um triângulo com perímetro %d.\n", perimetro);
        } else if (num_lados=4) {
                printf("Seu polígono é um quadrado com área %d.\n", area);
        } else if (num_lados=5) {
                printf("Seu polígono é um pentágono.\n");
        } else if(num_lados>5) {
                printf("Polígono não identificado.\n");
        }
}
