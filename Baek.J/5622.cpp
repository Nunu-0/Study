#include <iostream>
#include <string>
using namespace std;
//다이얼
int main() {
	string S;
	int time = 0;
	cin >> S;
	for (int i = 0; i < S.size(); i++) {
		//cout << S[i] << endl;
		if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C')
			time += 3;
		else if (S[i] == 'D' || S[i] == 'E' || S[i] == 'F')
			time += 4;
		else if (S[i] == 'G' || S[i] == 'H' || S[i] == 'I')
			time += 5;
		else if (S[i] == 'J' || S[i] == 'K' || S[i] == 'L')
			time += 6;
		else if (S[i] == 'M' || S[i] == 'N' || S[i] == 'O')
			time += 7;
		else if (S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S')
			time += 8;
		else if (S[i] == 'T' || S[i] == 'U' || S[i] == 'V')
			time += 9;
		else if (S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z')
			time += 10;
	}
	cout << time;

	return 0;
}
