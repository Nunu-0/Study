#include <iostream>
using namespace std;
// 얼마?
int main() {
	int c, s, n, q, p, result;
	cin >> c;

	for (int i = 0; i < c; i++) {
		cin >> s >> n;
		result = s;
		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			result += q * p;
		}
		cout << result << endl;
	}

	return 0;
}
