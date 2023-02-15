/*    Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas
(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o
resultado dessa operação sobre os dois valores lidos.

    [Entrada]     |   [Entrada]   | [Entrada]          | [Entrada]
        5         |      10       | 7                  | 12
        3         |       3       | 2                  | 5
    1 (adição)    | 2 (subtração) | 3 (divisão)        | 4 (multiplicação)
                  |               |                    |
    [Saída]       | [Saída]       | [Saída]            | [Saída]
    8 (resultado) | 7 (resultado) | 3.5 (resultado)    | 60 (resultado)
*/

#include <stdio.h>

int main() {
    float num_1, num_2, resultado;
    int operador;
    printf("Digite qual operação você quer fazer. 1:Adição, 2:Subtração, 3:Divisão, 4:Multiplicação.\n");
    scanf("%f", &operador);
    printf("Digite o primeiro número: ");
    scanf("%f", &num_1);
    printf("Digite o segundo número:");
    scanf("%f", &num_2);
    if ((operador<1) || (operador>4) ) {
        printf("Operador inválido.");
    } else if(operador==1) {
        resultado = num_1 + num_2;
    } else if(operador==2) {
        resultado = num_1 - num_2;
    } else if(operador==3) {
        resultado = num_1 / num_2;
    } else if(operador==4) {
        resultado = num_1 * num_2;
    }
    printf("%f", resultado);
}