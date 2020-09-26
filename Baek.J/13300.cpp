#include <iostream>
using namespace std;
// 방 배정
int main() {
	int N, K, gender, grade, room = 0;
	int student[2][6] = {}; // [성별][학년]

	cin >> N >> K;
	for (int i = 0; i < N; i++) { // 입력
		cin >> gender >> grade;
		++student[gender][grade - 1];
	}

	for (gender = 0; gender < 2; gender++) {
		for (grade = 0; grade < 6; grade++) {
			room += student[gender][grade] / K;
			if (student[gender][grade] % K != 0) {
				room++;
			}
		}
	}

	cout << room;

	return 0;
}
