#include <iostream>
using namespace std;
// 헬멧과 조끼
int main() {
	int h, v, hm = 0, vm = 0;
	cin >> h >> v;

	int* hh = new int[h];
	int* vh = new int[v];
	for (int i = 0; i < h; i++) {
		cin >> hh[i];
		if (hh[i] > hm) {
			hm = hh[i];
		}
	}
	for (int i = 0; i < v; i++) {
		cin >> vh[i];
		if (vh[i] > vm) {
			vm = vh[i];
		}
	}
	cout << hm + vm;

	return 0;
}
