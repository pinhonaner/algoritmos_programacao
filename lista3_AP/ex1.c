/*    Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular a média e escrever
se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média
calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0.

   [Entrada] | [Entrada]    | [Entrada]
5.0 (nota 1) | 8.0 (nota 1) | 2.0 (nota 1)
4.0 (nota 2) | 9.0 (nota 2) | 1.0 (nota 2)
             |              |
     [Saída] |   [Saída]    | [Saída]
 4.5 (média) | 8.5 (média)  | 1.5 (média)
    em Exame |   Aprovado   | Reprovado

*/

#include <stdio.h>

int main() {
   float nota_1, nota_2, media;

   printf("Digite a primeira nota: ");
   scanf("%f", &nota_1);

   printf("Digite a segunda nota: ");
   scanf("%f", &nota_2);

   media = (nota_1 + nota_2)/2;

   if (media >= 7) {
      printf("APROVADO com média %f.", media);
   } else if((media >= 3) && (media < 7)) {
      printf("EXAME com média %f.", media);
   } else {
      printf("REPROVADO com média %f.", media);
   }
}