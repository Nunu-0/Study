#include <iostream>
using namespace std;
// 지능형 기차
int main() {
	int in, out, people = 0, max = 0;

	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		people = people + in - out;
		if (people > max) {
			max = people;
		}
	}
	cout << max;

	return 0;
}
