#include <stdio.h>

int main(){
    int num = 0;
    scanf("%d ", &num);
    for(int i = 1; i <= num; i++){
        for(int j = i; j < num; j++)
            printf(" ");
        for(int k = 0; k < i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
