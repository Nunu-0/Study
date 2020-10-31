#include <iostream>
using namespace std;
// 배수와 약수
int main() {
	int a, b;

	do {
		cin >> a >> b;
		if (a == 0 && b == 0) {

		}
		else if (b % a == 0) {
			cout << "factor" << endl;
		}
		else if (a % b == 0) {
			cout << "multiple" << endl;
		}
		else {
			cout << "neither" << endl;
		}
	} while (a != 0 && b != 0);

	return 0;
}
