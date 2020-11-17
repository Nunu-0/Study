#include <iostream>
using namespace std;
// 다면체
int main() {
	int t, v, e;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> v >> e;
		cout << 2 - v + e << endl;
	}

	return 0;
}
