#include <iostream>
#include <algorithm>// sort()
#include <cmath> // pow()
using namespace std;
//직각삼각형
int main() {
	int l[3];

	while (1) {
		for (int i = 0; i < 3; i++)
			cin >> l[i];
		sort(begin(l), end(l));
		if (l[2] == 0)
			break;
		if (pow(l[2], 2) == pow(l[0], 2) + pow(l[1], 2)) // pow 제곱
			cout << "right\n";
		else
			cout << "wrong\n";
	}

	return 0;
}
