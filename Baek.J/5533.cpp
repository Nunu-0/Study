#include <iostream>
using namespace std;
// 유니크
int main() {
	int p;
	int player[201][3];
	int result[201] = {};
	bool check;
	cin >> p;

	for (int i = 0; i < p; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> player[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < p; k++) {
				if (player[j][i] == player[k][i] && j != k) {
					check = false;
				}
			}
			if (check) {
				result[j] += player[j][i];
			}
			check = true;
		}
	}

	for (int i = 0; i < p; i++) {
		cout << result[i] << endl;
	}

	return 0;
}
