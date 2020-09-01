#include <iostream>
using namespace std;
//분해합 -> 브루트 포스 brute=fprce 기법 (노가다)
int main() {
	int n; // 분해합
	int ps = 0, nps; //ps = 자리수, nps = 자리수를 구하기 위한 n

	cin >> n;
	nps = n;
	while (nps > 0) { // 자리수 개수 구하기
		nps /= 10;
		ps++;
	}
	for (int i = n - (ps * 9); i < n; i++) { //분해합 - 자리수 * 9 < 생성자 < 분해합
		int sum = i; // i의 분해합
		nps = i;
		while (nps > 0) {
			sum = sum + (nps % 10);
			nps /= 10;
		}
		if (sum == n) { // 가장 작은 생성자
			cout << i;
			return 0;
		}
	}
	cout << "0"; // 생성자가 없을 경우

	return 0;
}
