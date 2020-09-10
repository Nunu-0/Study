#include <iostream>
#include <vector>
using namespace std;
//N과 M (2)
int N, M;
int num[8];
bool check[8];

void solution(int n) {
	if (n == M) {
		for (int i = 0; i < M; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
	}
	for (int i = num[n - 1]; i <= N; i++) {
		if (!check[i]) {
			num[n] = i;
			check[i] = true;
			solution(n + 1);
			check[i] = false;
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		num[0] = i;
		check[i] = true;
		solution(1);
	}

	return 0;
}
