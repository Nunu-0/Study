#include <iostream>
#include <vector>
using namespace std;
// N과 M (3)
int N, M;
vector <int> num;

void solution() {
	if (num.size() == M) {
		for (int i = 0; i < M; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= N; i++) {
			num.push_back(i);
			solution();
			num.pop_back();
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;
	solution();

	return 0;
}
