/*    Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior
que 10, caso contrário escrever NÃO É MAIOR QUE 10!
*/

#include <stdio.h>

int main() {
    float valor;
    printf("Digite um valor numérico: ");
    scanf("%f", &valor);
    if (valor>10) {
        printf("É MAIOR QUE 10!\n");
    }
    else {
        printf("NÃO É MAIOR QUE 10!\n");
    }
};