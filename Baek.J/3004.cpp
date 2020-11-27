#include <iostream>
using namespace std;
// 체스판 조각
int main() {
	int n;
	cin >> n;
	cout << (n / 2 + 1)*(n - n / 2 + 1);

	return 0;
}
