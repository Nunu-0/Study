#include <iostream>
#include <algorithm>
using namespace std;
//일곱 난쟁이
int midget[9];
int sum = 0;

void find() {
	int gap = sum - 100;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (gap == midget[i] + midget[j]) {
				midget[i] = 0;
				midget[j] = 0;
				return;
			}
		}
	}
}

int main() {

	for (int i = 0; i < 9; i++) {
		cin >> midget[i];
		sum += midget[i];
	}
	find();
	sort(midget, midget + 9);
	for (int i = 2; i < 9; i++) {
		cout << midget[i] << endl;
	}
	return 0;
}
