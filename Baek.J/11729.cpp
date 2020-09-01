#include <iostream>
using namespace std;
//하노이 탑 이동 순서


int count(int n) {
	if (n == 1)
		return 1;
	return count(n - 1) * 2 + 1;
}
void hanoi(int n, int from, int middle, int to) {
	if (n == 1)
		cout << from << " " << to << "\n";//이동 경로 출력
	else {
		hanoi(n - 1, from, to, middle); //n-1개가 모두 2로 이동
		hanoi(1, from, middle, to); //이동 경로 출력
		hanoi(n - 1, middle, from, to);//n-1개가 모두 1로 이동
	}
}
int main() {
	int n; // n = 원판 개수
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cout << count(n) << "\n"; // 옮긴 횟수
	hanoi(n, 1, 2, 3);

	return 0;
}
