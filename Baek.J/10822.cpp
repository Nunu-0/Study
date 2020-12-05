#include <iostream>
#include <string>
using namespace std;
// 더하기
int main() {
	string s, num;
	int sum = 0;

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',') {
			sum += stoi(num);
			num = "";
		}
		else {
			num += s[i];
		}
	}
	cout << sum + stoi(num);

	return 0;
}
