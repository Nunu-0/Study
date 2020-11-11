#include <iostream>
using namespace std;
// 파티가 끝나고 난 뒤
int main() {
	int L, P, a, b, c, d, e, cnt;
	cin >> L >> P >> a >> b >> c >> d >> e;

	cnt = L * P;
	cout << a - cnt << " " << b - cnt << " " << c - cnt << " "
		<< d - cnt << " " << e - cnt;

	return 0;
}
