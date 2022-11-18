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
        if(nums[i]% 2 != 0){
            for(int j=i;j<10;j++){
                if(nums[j]% 2 == 0){
                    aux = nums[i];
                    nums[i] = nums[j];
                    nums[j] = aux;
                }
            }
        }

    }
    for(int i=0;i<10;i++){
        printf("%d\n", nums[i]);
    }
    return 0;
}
