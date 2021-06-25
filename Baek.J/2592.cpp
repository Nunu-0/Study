#include <iostream>
#include <algorithm>
using namespace std;
// [2592] 대표값
int main() {
	int n, num[1001] = {};
	int sum = 0, maxi = 0, maxn = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		num[n]++;
		sum += n;
	}
	
	for (int i = 0; i < 1001; i++) {
		if (maxi < num[i]) {
			maxn = i;
			maxi = num[i];
		}
	}

	cout << sum / 10 << endl;
	cout << maxn;

	return 0;
}