#include <iostream>
using namespace std;
//분수찾기
int main() {
	long long n, left = 1, right = 1, count = 1;//left = 분자, right = 분모, count = 몇 번 째

	cin >> n;
	while (n > count) {
		n -= count;
		count++;
	}
	if (count % 2 == 0) { //짝수면
		right = count;
		for (int i = 1; i < n; i++) {
			left++;
			right--;
		}
	}
	else if (count % 2 == 1) { //홀수면
		left = count;
		for (int i = 1; i < n; i++) {
			left--;
			right++;
		}
	}
	cout << left << "/" << right;

	return 0;
}
