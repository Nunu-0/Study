#include <iostream>
#include <string>
using namespace std;
//단어의 개수
int main() {
	string s;
	int n = 0;
	getline(cin, s); //공백이 끼어있는 문자열 입력

	for (int i = 0; i < s.size(); i++) {
		if ((s[i] >= 'A') && ((s[i + 1] == ' ') || (i + 1 == s.size()))) //문자 뒤에 공백이 있거나 마지막 문자라라면
			n++;
	}

	cout << n;

	return 0;
}
