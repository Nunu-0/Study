#include <iostream>
using namespace std;
//별 찍기 - 10

void star(int n, int i, int j) {
	if (((i / n) % 3 == 1) && ((j / n) % 3 == 1)) {
		cout << " ";
	}
	else if (n < 3) {
		cout << "*";
	}
	else {
		star(n / 3, i, j);
	}
}

int main() {
	int n; //3의 거듭제곱만

	cin >> n;
	for (int i = 0; i < n; i++) { // 라인
		for (int j = 0; j < n; j++)
			star(n, j, i);
		cout << endl;
	}

	return 0;
}
