#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int T, R;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		for (int i = 0; i < S.size(); i++) {
			for (int j = 0; j < R; j++)
				cout << S[i];
		}
		cout << endl;
	}
	return 0;
}
