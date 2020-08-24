#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, count;
	string result;
	cin >> n;
	int *sum = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> result;
		count = 1;
		sum[i] = 0;
		for (int j = 0; j <= result.length(); j++) {
			if (result[j] == 'O') {
				sum[i] += count;
				++count;
			}
			else {
				count = 1;
			}
		}
		result.clear();
	}
	for (int i = 0; i < n; i++) {
		cout << sum[i] << endl;
	}
	return 0;
}
