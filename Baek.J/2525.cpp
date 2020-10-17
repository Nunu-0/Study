#include <iostream>
using namespace std;
// 오븐 시계
int main() {
	int A, B, C;
	cin >> A >> B >> C;

	A = (A + ((B + C) / 60)) % 24;
	B = (B + (C % 60)) % 60;

	cout << A << " " << B;

	return 0;
}
