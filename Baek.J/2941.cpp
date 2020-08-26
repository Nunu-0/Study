#include <iostream>
#include <string>
using namespace std;
//크로아티아 알파벳
int main() {
	string S , x;
	string CA[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int sp;

	cin >> S;
	for (int i = 0; i < 8; i++) { // CA배열 안의 문자를 한 알파벳으로 교체
		x = CA[i];
		while (1) {
			sp = S.find(x); //문자를 찾아서 그 문자열이 시작하는 위치 리턴 / 없다면 -1 리턴
			if (sp == -1)
				break;
			else {
				if (i == 2)
					S.replace(sp, 3, "&"); //replace(시작위치, 넣을 문자열 길이, 바꿀 문자열);
				else
					S.replace(sp, 2, "&");
			}
		}
	}
	cout << S.size();
	return 0;
}
