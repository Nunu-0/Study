#include <iostream>
using namespace std;
// XORXORXOR
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	while (c--) {
		a ^= b; //xor 연산자
	}
	cout << a;

	return 0;
}
