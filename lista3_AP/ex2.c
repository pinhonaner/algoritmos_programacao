/*    Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados
pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a
palavra EMPATE.


         [Entrada] |     [Entrada]      | [Entrada]
4 (gols do Grêmio) | 2 (gols do Grêmio) | 0 (gols do Grêmio)
2 (gols do Inter)  | 2 (gols do Inter)  | 1 (gols do Inter)
                   |                    |
[Saída]            |      [Saída]       | [Saída]
        Grêmio     |      Empate        | Inter
*/

#include <stdio.h>

int main() {
    int pontos_inter, pontos_gremio;
    printf("Digite o número de gols do Grêmio: ");
    scanf("%d", &pontos_gremio);
    printf("Digite o número de gols do Internacional: ");
    scanf("%d", &pontos_inter);

    if (pontos_gremio > pontos_inter) {
        printf("O vencedor do GRENAL foi o Grêmio, com %d gols marcados.", pontos_gremio);
    } else if(pontos_inter > pontos_gremio) {
        printf("O vencedor do GRENAL foi o Internacional, com %d gols marcados.", pontos_inter);
    } else {
        printf("Não houve vencedor, o jogo empatou com %d gols para os dois lados", pontos_gremio);
    }
}