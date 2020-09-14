#include <iostream>
using namespace std;
//N-Queen
int N, Ncase = 0;
int board[15] = {}; // 15행

bool check(int row) {
	for (int i = 0; i < row; i++) {
		if(board[row] == board[i] || // 같은 열에 있거나
			abs(row - i) == abs(board[row] - board[i])) // 대각선에 위치
			return false;
	}
	return true;
}

void queen(int row) {
	if (row == N) {
		Ncase++;
	}
	else {
		for (int i = 0; i < N; i++) { //현재 행의 queen이 놓이는 열
			board[row] = i;
			if (check(row)) // 서로 공격할 수 없는 위치라면 OK
				queen(row + 1);
			board[row] = 0;
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;
	queen(0);
	cout << Ncase;

	return 0;
}
