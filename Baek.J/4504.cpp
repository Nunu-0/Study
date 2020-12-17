#include <iostream>
using namespace std;
// 배수 찾기
int main() {
	int n, num;
	cin >> n;
	while (1) {
		cin >> num;
		if (num == 0) {
			break;
		}
		if (num % n == 0) {
			cout << num << " is a multiple of " << n << "." << endl;
		}
		else {
			cout << num << " is NOT a multiple of " << n << "." << endl;
		}
	}

	return 0;
}
