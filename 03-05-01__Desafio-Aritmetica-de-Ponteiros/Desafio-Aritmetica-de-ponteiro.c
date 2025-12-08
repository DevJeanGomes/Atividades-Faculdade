#include <stdio.h>
#include <stdlib.h>

void exibir_dobro(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Dobro da nota %d = %d\n", i + 1, *(v + i) * 2);
    }
}
int main()
{
    int N;
    int *vet;
    int *ptr;

    printf("Qual a quantidade de notas ? ");
        scanf("%d", &N);

    vet = (int *)malloc(N * sizeof(int));

    printf("\nDigite as notas:\n");

    ptr = vet;

    for (int i = 0; i < N; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    void (*ponteiro_funcao)(int *, int);

    ponteiro_funcao = exibir_dobro;

    printf("\nO dobro delas: \n");

    ponteiro_funcao(vet, N);

    free(vet);

    system("pause");

    return 0;
}