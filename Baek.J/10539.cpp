#include <iostream>
using namespace std;
// 수빈이와 수열
int main() {
	int n, num, sum = 0;
	cin >> n;
	int* arr = new int[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> num;
		arr[i] = num * i - sum;
		sum += arr[i];
	}
	for (int j = 1; j <= n; j++) {
		cout << arr[j] << " ";
	}

	return 0;
}
