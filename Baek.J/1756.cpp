#include <iostream>
#include <vector>
using namespace std;
// [1756] 피자 굽기
int main() {
	int d, n; // d = 오븐 깊이, n = 반죽 개수
	cin >> d >> n;
	vector <int> oven(d); // 상단부터 오븐의 지름
	vector <int> pizza(n); // 완성된 순서의 피자 지름

	// 오븐 지름 입력
	for (int i = 0; i < d; i++) {
		cin >> oven[i];

		if (i != 0 && oven[i] > oven[i - 1]) { // 입력된 오븐지름이 위의 오븐 크기보다 크면 위의 오븐 지름과 같은 크기로 만들어 줌
			oven[i] = oven[i - 1];
		}
	}

	// 피자 지름 입력
	for (int i = 0; i < n; i++) {
		cin >> pizza[i];
	}

	int depth = d - 1; // 피자가 들어갈 수 있는 깊이
	int oinp = 0; // 오븐 안에 피자가 들어간 개수

	// 완성된 순서대로 피자 오븐에 넣기
	// 오븐의 아래부터 검사함
	while (depth >= 0) {
		if (oven[depth] >= pizza[oinp]) {
			oinp++;
		}

		if (oinp == n) { // 피자가 전부 들어갔으면
			cout << depth + 1;
			return 0;
		}
		depth--;
	}

	// 피자가 덜 들어갔으면
	cout << "0";

	return 0;
}
