#include <iostream>
using namespace std;
//부녀회장이 될테야
int sum(int k, int n) {
	if (n == 1) // 호수가 1번째는 모두 1명이 산다.
		return 1;
	else if (k == 0) // 0층에는 사람이 호수 만큼 산다.
		return n;
	else
		return sum(k - 1, n) + sum(k, n - 1);
}

int main() {
	int T, k, n; //T = 테스트 개수, k = 층, n = 호
	int p; //사람의 수

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << sum(k, n) << endl;
	}

	return 0;
}
