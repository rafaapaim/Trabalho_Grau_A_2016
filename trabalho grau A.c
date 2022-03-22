#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void)
{
    float n1, n2, n3, media, maior, menor;
    int op;

    printf("Informe nota 1:");
    scanf("%f", &n1);
    printf("Informe nota 2:");
    scanf("%f", &n2);
    printf("Informe nota 3:");
    scanf("%f", &n3);

    if (n1<0 || n1>10 || n2<0 || n2>10 || n3<0 || n3>10)
    {
        printf("Erro: nota invalida!");
    }else{
            media = (n1+n2+n3)/3;
            printf("Media: %.2f\n", media);
            //achar maior
            maior = n1;
            if (n2>maior)
                maior = n2;
            if (n3>maior)
                maior = n3;
            printf("Maior: %.2f\n", maior);
            //achar menor
            menor = n1;
            if (n2<menor)
                menor = n2;
            if (n3<menor)
                menor = n3;
            printf("Menor: %.2f\n", menor);
            printf("Media sem a maior nota: %.2f\n", (n1+n2+n3-maior)/2);
            printf("O aluno fez todos os exercicios? (1-sim):");
            scanf("%d", &op);
            if (op == 1)
            {
                media = media + 1;
                if (media > 10)
                    media = 10;
                printf("Media com exercicios: %.2f\n", media);
            }
         }

    getch();
}
