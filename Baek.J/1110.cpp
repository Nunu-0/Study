#include <stdio.h>

int main(){
    int n = 0, cycle = 0, sum = 0, newN = 0;
    scanf("%d", &n);
    newN = n;
    while(1){
        sum = (newN/10) + (newN%10);
        newN = (newN%10)*10 + (sum%10);
        cycle++;
        if(n == newN)
            break;
    }
    printf("%d", cycle);
    return 0;
}
