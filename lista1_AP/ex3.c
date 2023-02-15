/*    Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores. 
*/

#include <stdio.h>

int main() {
    int total_eleitores, votos_brancos, votos_nulos, votos_validos;
    float porcentagem_brancos, porcentagem_nulos, porcentagem_validos;

    printf("Digite o número total de eleitores: ");
    scanf("%d", &total_eleitores);
    printf("Digite o número de votos em branco: ");
    scanf("%d", &votos_brancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votos_nulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votos_validos);

    porcentagem_brancos = (votos_brancos / total_eleitores)*100;
    porcentagem_nulos = (votos_nulos / total_eleitores)*100;
    porcentagem_validos = (votos_validos / total_eleitores)*100;

    printf("Os votos foram distribuidos da seguinte maneira:\n  Votos Válidos: %.2f %%\n    Votos Nulos: %.2f %%\n  Votos Brancos: %.2f %%\n", porcentagem_validos, porcentagem_nulos, porcentagem_brancos);

};