#include <iostream>
#include <string>
using namespace std;
//단어 공부
int main() {
	string S;
	int alp[26] = {};
	int max = 0, count = 0, big;
	cin >> S;
	//알파벳 개수 세기
	for(int i = 0; i < S.size(); i++) {
		if (S[i] < 'a')
			alp[S[i] - 'A']++;
		else if (S[i] >= 'a')
			alp[S[i] - 'a']++;
	}
	//가장 많이 사용된 알파벳 찾기
	for (int i = 0; i < sizeof(alp) / sizeof(int); i++) {
		if (max < alp[i]) {
			max = alp[i];
			big = i;
		}
	}
	//겹치는 영어 구별
	for (int i = 0; i < sizeof(alp) / sizeof(int); i++) {
		if (max == alp[i])
			count++;
	}

	// 출력값 정하기
	if (count == 1)
		cout << (char) (big + 'A');
	else
		cout << "?";

	return 0;
}
