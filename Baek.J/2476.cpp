#include <iostream>
using namespace std;
// 주사위 게임
int main() {
	int dice[3];
	int t, max = 0, win = 0;

	cin >> t;
	int *cost = new int[t];
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> dice[j];
			if (max < dice[j]) {
				max = dice[j];
			}
		}
		if (dice[0] == dice[1] && dice[0] == dice[2]) {
			cost[i] = 10000 + dice[0] * 1000;
		}
		else if (dice[0] == dice[1] || dice[0] == dice[2]) {
			cost[i] = 1000 + dice[0] * 100;
		}
		else if (dice[1] == dice[2]) {
			cost[i] = 1000 + dice[1] * 100;
		}
		else {
			cost[i] = max * 100;
		}
	}
	for (int k = 0; k < t; k++) {
		if (win < cost[k]) {
			win = cost[k];
		}
	 }
	cout << win;

	return 0;
}
