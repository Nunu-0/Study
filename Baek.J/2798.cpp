#include <iostream>
using namespace std;
//블랙잭
int main() {
	int n, m;// n = 카드 개수, m = 주어진 숫자
	int s, nn, d = 300000; //s = 카드 합친 수 nn = m과 가장 가까운 숫자, d = m과 s의 차이
	int cardN[101]; //카드 숫자

	cin >> n >> m;
	for (int i = 0; i < n; i++) //카드 숫자 입력
		cin >> cardN[i];

	for (int i = 0; i < n - 2; i++) // 모든 카드를 3개씩 더하기
		for (int j = i + 1; j < n - 1; j++)
			for (int k = j + 1; k < n; k++) {
				s = cardN[i] + cardN[j] + cardN[k];
				if (m - s < d && s <= m) {//합친 수가 M과 최대한 가까우면서 넘지 않는 수 == nn
					d = m - s;
					nn = s;
				}
			}
	cout << nn;

	return 0;
}
