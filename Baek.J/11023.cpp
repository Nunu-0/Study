#include <iostream>
using namespace std;
// 더하기 3
int main() {
	int n, sum = 0;

	while (scanf("%d", &n) != EOF) { // EOF= -1
		sum += n;
	}
	cout << sum;

	return 0;
}
