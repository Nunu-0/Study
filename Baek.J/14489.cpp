#include <iostream>
using namespace std;
//치킨 두 마리(...)
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int sum = a + b;
	c = c * 2;

	if (c <= sum) {
		sum -= c;
	}
	cout << sum;

	return 0;
}
