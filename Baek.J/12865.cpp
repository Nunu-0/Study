#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//[12865] 평범한 배낭
int n, k, w, v; // n = 물품의 수, k = 버틸 수 있는 무게
int dp[101][100001]; // dp[물품][무게]
vector<pair<int, int>> goods;

void DP() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j >= goods[i].first) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - goods[i].first] + goods[i].second);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[n][k];
}

int main() {
	cin >> n >> k;

	goods.push_back({ 0, 0 });

	for (int i = 1; i <= n; i++) {
		cin >> w >> v;
		goods.push_back({ w, v });
	}

	DP();

	return 0;
}
