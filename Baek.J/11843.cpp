#include <iostream>
using namespace std;
// 파일 옮기기
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a + d < b + c) {
		cout << a + d;
	}
	else
		cout << b + c;

	return 0;
}
