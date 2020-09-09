#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
//나이순 정렬
bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first < b.first)
		return true;
	return false;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector <pair<int, string>> people(n);

	for (int i = 0; i < n; i++){
		cin >> people[i].first >> people[i].second;
	}

	stable_sort(people.begin(), people.end(), compare); //위치가 보장된 정렬(안정 정렬)

	for (auto it : people) {
		cout << it.first << " " << it.second << "\n";
	}

	return 0;
}
