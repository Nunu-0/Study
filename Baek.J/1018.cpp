#include <iostream>
#include <string>
using namespace std;
//체스판 다시 칠하기
string wb[8] = { {"WBWBWBWB"}, //흰색이 먼저
				 {"BWBWBWBW"},
				 {"WBWBWBWB"},
				 {"BWBWBWBW"},
				 {"WBWBWBWB"},
				 {"BWBWBWBW"},
				 {"WBWBWBWB"},
				 {"BWBWBWBW"} };
string bw[8] = { {"BWBWBWBW"}, //검정이 먼저
				 {"WBWBWBWB"},
				 {"BWBWBWBW"},
		 		 {"WBWBWBWB"},
		  		 {"BWBWBWBW"},
				 {"WBWBWBWB"},
				 {"BWBWBWBW"},
				 {"WBWBWBWB"} };
string chess[50]; //주어진 보드


int sum(int n, int m, int min) {
	int wbC = 0, bwC = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (wb[i][j] != chess[n + i][m + j])
				wbC++;
			if (bw[i][j] != chess[n + i][m + j])
				bwC++;
		}
	}
	if (min > wbC)
		min = wbC;
	if (min > bwC)
		min = bwC;

	return min;
}

int main() {
	int n, m; // n = 세로, m = 가로
	int min = 250;
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);//속도 최적화

	cin >> n >> m;
	for (int i = 0; i < n; i++) { // 입력
		cin >> chess[i];
	}
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++)
			min = sum(i, j,min);
	}
	cout << min;

	return 0;
}
