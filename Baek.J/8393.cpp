#include <stdio.h>

int main(){
    int A = 0, sum = 0;
    scanf("%d", &A);
    for(int i = 1; i <= A; i++)
        sum += i;
    printf("%d", sum);
    return 0;
}
