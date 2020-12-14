#include <iostream>
using namespace std;
// 인공지능 시계
int main() {
	int h, m, s, time;
	cin >> h >> m >> s >> time;

	s += (time % 60);
	m += (time / 60);
	if (s >= 60) {
		s %= 60;
		m++;
	}
	if (m >= 60) {
		h += (m / 60);
		m %= 60;
	}
	if (h >= 24) {
		h %= 24;
	}

	cout << h << " " << m << " " << s;
	return 0;
}
