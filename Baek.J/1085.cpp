#include <iostream>
#include <algorithm> // sort함수
using namespace std;
//직사각형에서 탈출
int main() {
	int x, y, w, h;

	cin >> x >> y >> w >> h;
	int d[4] = {x, y, w - x, h - y};
	sort(begin(d), end(d)); //d행렬의 시작부터 끝까지 정렬
	cout << d[0];

	return 0;
}
