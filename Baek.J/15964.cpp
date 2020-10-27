#include <iostream>
using namespace std;
// 이상한 기호 (100점)
int main() {
	long long int a, b, sum;

	cin >> a >> b;
	sum = (a + b) * (a - b);
	cout << sum;

	return 0;
}
