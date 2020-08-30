#include <iostream>
using namespace std;
//네 번째 점
int main() {
	int x, y;
	int xp[1001] = {};
	int yp[1001] = {};

	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		xp[x]++;
		yp[y]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (xp[i] % 2 == 1)
			x = i;
		if (yp[i] % 2 == 1)
			y = i;
	}
	cout << x << " " << y;

	return 0;
}
