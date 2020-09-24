#include <iostream>
#include <algorithm>
using namespace std;
// 1로 만들기
int dp[10000001];

int makeone(int n) {
	if (n == 1) // 조건 완료
		return 0;
	if (dp[n] > 0) // 저장된 값 반환
		return dp[n];

	dp[n] = makeone(n - 1) + 1;
	if (n % 2 == 0) {
		dp[n] = min(dp[n], makeone(n / 2) + 1);
	}
	if (n % 3 == 0) {
		dp[n] = min(dp[n], makeone(n / 3) + 1);
	}

	return dp[n];
}

int main() {
	int n;

	cin >> n;
	cout << makeone(n);

	return 0;
}
