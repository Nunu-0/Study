#include <iostream>
#include <string>
using namespace std;
// 알파벳 개수
int main() {
	int alp[26] = {};
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		alp[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alp[i] << " ";
	}

	return 0;
}
