#include <iostream>
using namespace std;
// Baseball
int main() {
	int t, a, b, y, k;
	cin >> t;
	for (int i = 0; i < t; i++) {
		y = 0, k = 0;
		for (int j = 0; j < 9; j++) {
			cin >> a >> b;
			y += a;
			k += b;
		}
		if (y > k) {
			cout << "Yonsei" << endl;
		}
		else if (k > y) {
			cout << "Korea";
		}
		else {
			cout << "Draw";
		}
	}
	return 0;
}
