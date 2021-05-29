#include <iostream>
#include <string>
using namespace std;
// [6996] 애너그램
int main() {
	int N, cnt; // 테스트 개수
	string A, B;
	int Alp[26] = { 0 };

	cin >> N;

	for (int i = 0; i < N; i++) {
		cnt = 0;
		cin >> A >> B;

		for (int j = 0; j < A.size(); j++) {
			Alp[A[j] - 'a']++;
		}
		for (int j = 0; j < B.size(); j++) {
			Alp[B[j] - 'a']--;
		}

		for (int j = 0; j < 26; j++) {
			if (Alp[j] != 0)
				cnt++;
			Alp[j] = 0;
		}

		if (cnt == 0)
			cout << A << " & " << B << " are anagrams." << endl;
		else
			cout << A << " & " << B << " are NOT anagrams." << endl;


	}

	return 0;
}
