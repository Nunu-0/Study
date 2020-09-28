#include <iostream>
using namespace std;
// 뉴비의 기준은 뭘까?
int main() {
	int N, M;

	cin >> N >> M;
	if (M < 3 && M <= N) {
		cout << "NEWBIE!";
	}
	else if (M <= N) {
		cout << "OLDBIE!";
	}
	else
		cout << "TLE!";

	return 0;
}
