#include <iostream>
using namespace std;
//ACM 호텔
int main() {
	int T, H, W, N;
	int h, r; //h = 손님의 층, r = 손님의 호

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		r = (N - 1) / H + 1;
		h = (N - 1)  % H + 1;
		if (r < 10)
			cout << h << "0" << r << endl;
		else
			cout << h << r << endl;
	}

	return 0;
}
