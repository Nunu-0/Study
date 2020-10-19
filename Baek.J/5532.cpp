#include <iostream>
using namespace std;
// 방학 숙제
int main() {
	int L, A, B, C, D; // 방학일, 국어p, 수학p, 국어 풀p, 수학 풀p
	cin >> L >> A >> B >> C >> D;
	int a = A, b = B;

	a = A / C;
	if (A % C != 0) {
		a++;
	}
	b = B / D;
	if (B % D != 0) {
		b++;
	}

	if (a < b) {
		cout << L - b;
	}
	else {
		cout << L - a;
	}

	return 0;
}
