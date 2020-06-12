#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    B -= 45;
    if(B < 0)
        A = (A+23)%24;
    B = (B+60)%60;
    printf("%d %d", A, B);
    return 0;
}
