#include <iostream>
using namespace std;
//손익분기점
int main() { //100만 값이 넘는다면 int는 오버플로우가 일어날 수 있음
	long long A, B, C; //A = 고정 비용, B = 생산(가변) 비용, C = 노트북 가격
	long long x = 0; //x = 최초 이익(손익분기점)의 노트북 개수 (판매량)

	cin >> A >> B >> C;
	if (B >= C) {
		x = -1;
	}
	else {
		x = A / (C - B) + 1;
	}
	cout << x;

	return 0;
}
