#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int A, B, num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}
