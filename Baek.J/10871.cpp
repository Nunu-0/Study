#include <stdio.h>

int main(){
    int num = 0, s = 0, n = 0;
    scanf("%d %d", &num, &s);
    for(int i = 0; i < num; i++){
        scanf("%d", &n);
        if(n < s)
            printf("%d ", n);
    }
    return 0;
}
