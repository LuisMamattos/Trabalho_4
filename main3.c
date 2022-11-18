#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Select sort, modificado para dar prioridade a números pares!

int *nums, aux, n=0;
void select_pares(int *p);
int main()
{
    for(n=0;*(nums+n) != -1;n++){
        nums = realloc(nums,(nums+(n*sizeof(int)));
        printf("digite um número, ou digite '-1' para sair: ");
        scanf("%d",(nums+n));
    }
    select_pares(nums);

    for(int i=0;i<n;i++){
        printf("%d\n", *(nums+i));
    }
    return 0;
}
void select_pares(int *p){
    for(int i=0;i<n;i++){
        if((*(p+i))% 2 != 0){
            for(int j=i;j<n;j++){
                if((*(p+j))% 2 == 0){
                    aux = *(p+i);
                    *(p+i)= *(p+j);
                    *(p+j) = aux;
                }
            }
        }
    }
}
