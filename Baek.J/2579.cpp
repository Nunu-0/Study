#include <iostream>
#include <algorithm>
using namespace std;
// 계단 오르기
int n;
int stair[301]; // 계단 점수
int dpTable[301]; // 다이나믹 프로그래밍

int dp(int i){
	if (i < 0)
		return 0;
	if (dpTable[i] != 0)
		return dpTable[n];
	return dpTable[i] = max(dp(i - 2) + stair[i] ,  dp(i - 3) + stair[i - 1] + stair[i]);
	// 마지막 계단을 중심으로 점화식을 구함
}

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}
	cout << dp(n);

	return 0;
}
