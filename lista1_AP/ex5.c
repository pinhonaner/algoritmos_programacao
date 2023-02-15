/*    Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.
Fórmula para o cálculo da média final é:

𝑀é𝑑𝑖𝑎𝐹𝑖𝑛𝑎𝑙 = (𝑛1 ∗ 2 + 𝑛2 ∗ 3 + 𝑛3 ∗ 5) / 10
*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota_final;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    nota_final = ((nota1*2)+(nota2*3)+(nota3*5))/10;

    printf("A nota final do aluno é de %.2f.\n", nota_final);
};