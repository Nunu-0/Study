#include <iostream>
#include <vector>
using namespace std;
// [11047] 동전 0
int main() {
	int n, k, rst = 0; // n = 동전 종류, k = 가치, rst = 필요한 동전 개수
	cin >> n >> k;
	vector<int> value(n); // 각 동전의 가치 : vector은 배열과 비슷

	for (int i = 0; i < n; i++) {
		cin >> value[i];
	}
	for (int i = n - 1; i >= 0; i--) { // 모든 동전을 확인하면 빠져 나옴
		if (value[i] <= k) { // 가치(k)와 가장 가깝고 낮은 동전의 가치 찾기
			rst += k / value[i]; // 가치 / 가장 가치가 높은 필요한 동전
			k %= value[i];
		}
	}

	cout << rst;
}
