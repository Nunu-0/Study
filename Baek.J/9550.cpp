#include <iostream>
using namespace std;
// 아이들은 사탕을 좋아해
int main() {
	int t, n, k, candy;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int child = 0;
		cin >> n >> k;

		for (int j = 0; j < n; j++) {
			cin >> candy;
			child += candy / k;
		}

		cout << child << endl;
	}

	return 0;
}
