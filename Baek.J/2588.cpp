#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d \n%d \n%d \n%d", (B%10)*A, (B%100/10)*A, (B/100)*A, A*B);
    return 0;
}
