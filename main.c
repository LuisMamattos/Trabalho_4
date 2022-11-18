#include <stdio.h>
#include <stdlib.h>

// Select sort, modificado para dar prioridade a números pares!

int nums[10], aux;
int main()
{
    for(int i=0;i<10;i++){
        printf("digite um número: ");
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<10;i++){
        for(int k = 0;(nums[i]%2 != 0)&&(k<10);k++){

            aux = nums[i];
            for(int j=i;j<9;j++){
                nums[j]= nums[j+1]; // rotaciona o vetor a partir de 'i'
            }
            nums[9] = aux;

        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n", nums[i]);
    }

    return 0;
}
