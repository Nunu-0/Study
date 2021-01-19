#include <iostream>
#include <queue>
using namespace std;
// [1697] 숨바꼭질
/*
수빈이가 이동할 수 있는 방법
1. n + 1
2. n - 1
3. n * 2

이동할 수 있는 모든 경우를 queue에 넣고
가장 빨리 동생의 위치를 찾은 시간을 구한다.
bool을 만들어 중복 체크를 막음으로 시간 단축
*/
int main() {
	int n, k; // n = 수빈이의 위치, k = 동생의 위치
	bool check[100001] = {false}; // 중복 체크
	queue<pair<int, int>> q; // 큐 <위치, 시간>

	cin >> n >> k;

	q.push(pair<int, int>(n, 0)); // 수빈이의 처음 위치 push
	check[n] = true;

	while (!q.empty()) {
		int loc = q.front().first; // 큐 가장 앞의 위치
		int time = q.front().second; // 큐 가장 앞의 걸린 시간

		if (loc == k) { // 동생을 찾으면 while 탈출
			break;
		}

		q.pop();
		check[loc] = true;

		if (loc + 1 <= 100000 && !check[loc + 1]) { // n + 1로 이동하고 시간은 1초 늘어남
			q.push(pair<int, int>(loc + 1, time + 1));
		}
		if (loc - 1 >= 0 && !check[loc - 1]) { // n - 1로 이동하고 시간은 1초 늘어남
			q.push(pair<int, int>(loc - 1, time + 1));
		}
		if (loc * 2 <= 100000 && !check[loc * 2]) { // n * 2로 이동하고 시간은 1초 늘어남
			q.push(pair<int, int>(loc * 2, time + 1));
		}

	}

	cout << q.front().second; // while을 빠져나올때 가장 앞에있는 원소가 가장 빨리 찾은 경우

	return 0;
}
