#include <iostream>
using namespace std;
//파도반 수열
long long p[101] = { 0, 1, 1, 1, 2};

void Padovan() {
	for (int i = 5; i <= 100; i++) {
		p[i] = p[i - 5] + p[i - 1];
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T, N;

	Padovan();
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << p[N] << "\n";
	}

	return 0;
}
