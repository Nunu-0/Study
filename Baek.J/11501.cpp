#include <iostream>
#include <vector>
using namespace std;
// [11501] 주식
int main() {
	int t, n; // t = 테스트 개수, n = 날의 수

	cin >> t;
	for (int i = 0; i < t; i++) { // 테스트 개수
		cin >> n;
		long max = 0, result = 0; // max = 주식이 가장 높은 가격, result = 최대 이익
		vector <int> price(n); // 주식 주가 배열

		for (int j = 0; j < n; j++) { // 주식 주가 등록
			cin >> price[j];
		}

		for (int j = n - 1; j >= 0; j--) { // 뒤에서 부터 검사
			if (price[j] > max) { // 현재보다 높은 주가가 있다면
				max = price[j]; // 높은 주가를 max에 대입
			}
			else { // 높은 주가가 없다면 (주가가 낮음)
				result += (max - price[j]); // 최대 주가(max)때 판매를 해 이익을 얻음
			}
		}

		cout << result << endl;
	}

	return 0;
}
