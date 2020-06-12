#include <stdio.h>

int main(){
    int A, B, C, mid;
    scanf("%d %d %d", &A, &B, &C);
    if ((B <= A && A <= C)||(C <= A && A <= B))
        mid = A;
    else if ((B <= C && C <= A)||(A <= C && C <= B))
        mid = C;
    else
        mid = B;
    printf("%d", mid);
    return 0;
}
