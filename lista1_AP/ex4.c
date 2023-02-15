/*    O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor.
*/

#include <stdio.h>

int main() {
    float custo_fabrica, porcentagem_distribuidor, impostos, custo_final;
    printf("Qual o custo de fábrica do veículo? ");
    scanf("%f", &custo_fabrica);
    impostos = 1.45;
    porcentagem_distribuidor = 1.28;
    custo_final = (custo_fabrica*impostos)*porcentagem_distribuidor;
    printf("O custo final do veículo, incluindo os impostos e a margem de lucro do distribuidor, será de %.2f.\n", custo_final);
};