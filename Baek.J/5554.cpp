#include <iostream>
using namespace std;
// 심부름 가는 길
int main() {
	int hs, sp, pa, ah, sum;

	cin >> hs >> sp >> pa >> ah;
	sum = hs + sp + pa + ah;
	cout << sum / 60 << endl << sum % 60;

	return 0;
}
