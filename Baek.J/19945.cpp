#include <iostream>
using namespace std;
// [19945] 새로운 언어CC
int main(){
    int n, rst = 0;
    cin >> n;
    
    if(n == 0) // 0이면
        rst = 1;
    else if(n < 0) // 음수이면
        rst = 32;
    while(n > 0){
        rst++;
        n /= 2;
    }
    
    cout << rst;
    return 0;
}