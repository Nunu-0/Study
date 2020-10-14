#include <iostream>
using namespace std;
// A + B - 6
int main() {
	int a, b, t;
	char c;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> c >> b;
		cout << a + b << endl;
	}

	return 0;
}
