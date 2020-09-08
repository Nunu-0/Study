#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//좌표 정렬하기
bool compare(pair<int, int> a, pair<int, int> b) { // 정렬 방법 a와 b 비교
	if (a.first == b.first)			// x좌표가 같을 때
		return a.second < b.second; // y좌표가 작은 쪽이 앞쪽에 정렬
	else
		return a.first < b.first; //같지 않으면 x좌표가 작은 쪽이 앞쪽에 정렬
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector <pair<int, int>> location(n);
	for (int i = 0; i < n; i++){
		cin >> location[i].first >> location[i].second; // x좌표 y좌표 입력
	}

	sort(location.begin(), location.end(), compare);

	for (int i = 0; i < n; i++){
		cout << location[i].first << " " << location[i].second << "\n";
	}

	return 0;
}
