#include <iostream>
using namespace std;

int main() {
	int arr[43] = {};
	int n, count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		arr[n % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] > 0) {
			count++;
		}
	}
	cout << count;
	return 0;
}
