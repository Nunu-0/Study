#include <iostream>
using namespace std;
// 지능형 기차 2
int main() {
	int in, out, pp = 0, max = 0;

	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		pp += in - out;
		if (max < pp) {
			max = pp;
		}
	}
	cout << max;

	return 0;
}
