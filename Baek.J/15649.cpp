#include <iostream>
#include <vector>
using namespace std;
//N과 M (1)
int N, M;
vector <int> num;
vector <bool> check;

void solution() {
	if (num.size() == M) {
		for (int i = 0; i < M; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!check[i]) { // 숫자가 겹치지 않는다면
			num.push_back(i);
			check[i] = true;
			solution();
			check[i] = false;
			num.pop_back();
		}
	}

}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;
	check.resize(N + 1);

	solution();

	return 0;
}
