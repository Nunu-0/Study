#include <iostream>
using namespace std;
// 더하기
int main() {
	int t, n, num, sum = 0;

	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n;
		sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
	}

	return 0;
}
