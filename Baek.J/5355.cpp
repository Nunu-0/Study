#include <iostream>
#include <string>
using namespace std;
// 화성 수학
int main() {
	int t;
	double n;
	string  s;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		getline(cin, s);

		for (int j = 0; j < s.size(); j++) {
			switch (s[j]) {
			case'@':
				n *= 3;
				break;
			case '%':
				n += 5;
				break;
			case '#':
				n -= 7;
				break;
			}
		}
		printf("%.2lf\n", n);
	}

	return 0;
}
