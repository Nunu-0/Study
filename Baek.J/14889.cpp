#include <iostream>
#include <algorithm>
using namespace std;
// 스타트와 링크
int N, result = 200000; // N = 모인 사람(짝수), result = 능력차 차
int status[20][20]; // 능력치
bool team[20];

void divide(int player, int cnt) {
	if (cnt == N / 2) { // 팀이 전부 나눠지면
		int Start = 0; // True팀
		int Link = 0; // False팀

		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++){
				if (team[i] && team[j]) {
					Start += status[i][j] + status[j][i];
				}
				if (!team[i] && !team[j]) {
					Link += status[i][j] + status[j][i];
				}
			}

		}
		result = min(result, abs(Start - Link));
	}
	else { // dfs(깊이 우선 탐색)으로 팀 나누기
		for (int i = player; i < N; i++) {
			if (!team[i]) {
				team[i] = true;
;				divide(i, cnt + 1);
				team[i] = false;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> status[i][j];
		}
	}
	divide(0, 0);
	cout << result;

	return 0;
}
