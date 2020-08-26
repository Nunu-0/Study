#include <iostream>
#include <string>
using namespace std;
//그룹 단어 체커
int main() {
	int n, count;
	string s;

	cin >> n;
	count = n;
	for (int i = 0; i < n; i++) {
		int alpha[26] = {};
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (alpha[s[j] - 'a'] == 0) { // 처음 나온 문자일 때
				alpha[s[j] - 'a']++;
			}
			else if ((j > 0) && (s[j] == s[j - 1])) { // 앞의 문자와 같은 문자 일 때
				alpha[s[j] - 'a']++;
			}
			else {
				count--;
				break;
			}
		}
	}
	cout << count;
	return 0;
}
