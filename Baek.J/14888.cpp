#include <iostream>
#include <algorithm>
using namespace std;
//연산자 끼워넣기
int mini = 100000000, maxi = -100000000;
int N;
int num[11];
int oper[4];

void solution(int sum, int check) {
	if (check == N) {
		mini = min(mini, sum);
		maxi = max(maxi, sum);
	}
	else {
		if (oper[0] > 0) { // 덧셈
			oper[0]--;
			solution(sum + num[check], check + 1);
			oper[0]++;
		}
		if (oper[1] > 0) { // 뺄셈
			oper[1]--;
			solution(sum - num[check], check + 1);
			oper[1]++;
		}
		if (oper[2] > 0) { // 곱셈
			oper[2]--;
			solution(sum * num[check], check + 1);
			oper[2]++;
		}
		if (oper[3] > 0) { // 나눗셈
			oper[3]--;
			solution(sum / num[check], check + 1);
			oper[3]++;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}

	solution(num[0], 1);

	cout << maxi << "\n" << mini;

	return 0;
}
