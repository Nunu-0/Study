#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//좌표 정렬하기 2
bool compare(pair<int, int> a, pair<int, int> b){
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector <pair <int, int>> location(n);

	for (int i = 0; i < n; i++){
		cin >> location[i].first >> location[i].second;
	}

	sort(location.begin(), location.end(), compare);

	for (int i = 0; i < n; i++){
		cout << location[i].first << " " << location[i].second << "\n";
	}

	return 0;
}
