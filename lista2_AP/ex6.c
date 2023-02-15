/*    Escreva um algoritmo que leia o código de um
aluno e suas três notas. Calcule a média
ponderada do aluno, considerando que o peso
para a maior nota seja 4 e para as duas restantes,
3. Mostre o código do aluno, suas três notas, a
média calculada e a mensagem "APROVADO"
se a média for maior ou igual a 5 e
"REPROVADO" caso contrário
*/

#include <stdio.h>

int main() {
    float nota_1, nota_2, nota_3, codigo_aluno, nota_final;
    printf("Digite o código do aluno: ");
    scanf("%f", &codigo_aluno);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota_3);

    nota_final = ((nota_1*3)+(nota_2*3)+(nota_3*4))/10;

    if (nota_final >= 5)
        printf("O aluno, de código %f, teve nota %f na primeira avaliação, nota %f na segunda avaliação e nota %f na terceira avaliação, sua media ponderada é %f, logo está APROVADO.", codigo_aluno, nota_1, nota_2, nota_3, nota_final);
    else
        printf("O aluno, de código %f, teve nota %f na primeira avaliação, nota %f na segunda avaliação e nota %f na terceira avaliação, sua media ponderada é %f, logo está REPROVADO.", codigo_aluno, nota_1, nota_2, nota_3, nota_final);

    }

