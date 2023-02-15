/*    Escrever um algoritmo que leia uma nota e
mostre o conceito equivalente. Suponha a
seguinte tabela de conversão.
*/

#include <stdio.h>

int main () {
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    if (nota > 9)
        printf("Sua nota é equivalente ao conceito A.");
    else 
        if (nota > 7)
        
            printf("Sua nota é equivalente ao conceito B.");
        
        else
            if (nota > 5)
            
                printf("Sua nota é equivalente ao conceito C.");
            
            else

                printf("Sua nota é equivalente ao conceito D."); 
    }