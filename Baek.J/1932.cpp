#include <iostream>
#include <algorithm>
using namespace std;
// 정수 삼각형
int triangle[501][501];
int high;

int sum() {
	int maxi = 0;
	for (int i = 1; i < high; i++) { // 층
		for (int j = 0; j <= i; j++) { // 열
			if (j == 0) // 맨 왼쪽 줄
				triangle[i][j] += triangle[i - 1][j];
			else if (j == i) // 맨 오른쪽 줄
				triangle[i][j] += triangle[i - 1][j - 1];
			else // 위의 두 숫자 중 큰 숫자
				triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
		}
	}

	for (int i = 0; i < high; i++) {
		maxi = max(maxi, triangle[high - 1][i]);
	}

	return maxi;
}

int main() {
	cin >> high;
	for (int i = 0; i < high; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> triangle[i][j];
		}
	}
	cout << sum();

	return 0;
}
