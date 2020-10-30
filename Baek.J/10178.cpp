#include <iostream>
using namespace std;
// 할로윈의 사탕
int main() {
	int t, a, b;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << "You get " << a / b << " piece(s) and your dad gets " << a % b <<" piece(s)." << endl;
	}

	return 0;
}
