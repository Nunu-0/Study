#include <stdio.h>

int main(){
    int A = 0, B = 0, num = 0;
    scanf("%d ", &num);
    for(int i = 1; i <= num; i++){
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A+B);
    }
    return 0;
}
