#include <iostream>
using namespace std;

int main() {
	int list[5];
	int a = 2000, b = 2000;
	for (int i = 0; i < 5; i++) {
		cin >> list[i];
		if (i < 3 && a > list[i]) {
			a = list[i];
		}
		else if (b > list[i]) {
			b = list[i];
		}
	}
	cout << a + b - 50;
	return 0;
}
