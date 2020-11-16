#include <iostream>
#include <math.h>
using namespace std;
// 앵그리 창영
int main() {
	int n, w, h, length, match;

	cin >> n >> w >> h;
	length = sqrt(pow(w, 2) + pow(h, 2));

	for (int i = 0; i < n; i++) {
		cin >> match;
		if (match <= length) {
			cout << "DA" << endl;
		}
		else{
			cout << "NE" << endl;
		}
	}

	return 0;
}
