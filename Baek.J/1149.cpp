#include <iostream>
#include <algorithm>
using namespace std;
// RGB거리
int colorCost[1000][3];
int cost[1000][3];
int house;

int sum() {
	cost[0][0] = colorCost[0][0]; // 빨간색
	cost[0][1] = colorCost[0][1]; // 초록색
	cost[0][2] = colorCost[0][2]; // 파란색
	for (int i = 1; i < house; i++) {
		cost[i][0] = colorCost[i][0] + min(cost[i - 1][1], cost[i - 1][2]);
		cost[i][1] = colorCost[i][1] + min(cost[i - 1][0], cost[i - 1][2]);
		cost[i][2] = colorCost[i][2] + min(cost[i - 1][0], cost[i - 1][1]);
	}
	return min(min(cost[house - 1][0], cost[house - 1][1]), cost[house - 1][2]);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> house;
	for (int i = 0; i < house; i++) {
		for (int j = 0; j < 3; j++)
			cin >> colorCost[i][j];
	}
	cout << sum();

	return 0;
}
