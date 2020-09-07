#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
//통계학
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int count[8001] = {};
	int n, max = 0, many = -1, cnt = 0;
	double sum = 0; //모든 값 합

	cin >> n;
	int *list = new int[n];
	for (int i = 0; i < n; i++){
		cin >> list[i];
		count[4000 + list[i]]++;
		sum += list[i];
	}
	sort(list, list + n); // 정렬

	cout << floor(sum / n + 0.5) << "\n"; // 산술평균 (반올림)

	cout << list[n / 2] << "\n"; // 중앙값

	for (int i = 0; i < 8001; i++){ // 최빈값
		if (cnt < 1 && count[i] == max) {
			cnt++;
			many = i;
		}
		if (count[i] > max) {
			many = i;
			max = count[i];
			cnt = 0;
		}
	}
	cout << many - 4000 << "\n";

	cout << abs(list[0] - list[n - 1]); // 범위

	return 0;
}
