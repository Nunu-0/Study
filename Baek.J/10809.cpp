#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	int alp[26];
	cin >> word;

	for (int i = 0; i < sizeof(alp) / sizeof(int); i++)
		alp[i] = -1;
	for (int i = 0; i <= word.size(); i++)
		if (alp[word[i] - 'a'] == -1)
			alp[word[i] - 'a'] = i;
	for (int i = 0; i < sizeof(alp) / sizeof(int); i++)
		cout << alp[i] << " ";

	return 0;
}
