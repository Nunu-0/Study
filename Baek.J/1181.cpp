#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// 단어 정렬
bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n;

	cin >> n;
	vector <string> word(n);
	for (int i = 0; i < n; i++){
		cin >> word[i];
	}

	sort(word.begin(), word.end(), compare);

	for (int i = 0; i < n; i++) {
		if(i == 0 || word[i] != word[i - 1])
			cout << word[i] << "\n";
	}

	return 0;
}
