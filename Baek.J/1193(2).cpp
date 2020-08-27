#include <iostream>
using namespace std;
//분수찾기
int main() {
	long long n, count = 1;//count = 몇 번 째인지

	cin >> n;
	while (n > count) {
		n -= count;
		count++;
	}
	if (count % 2 == 0) //짝수면
		cout << n << "/" << (count - n + 1);
	else //홀수면
		cout << (count - n + 1) << "/" << n;

	return 0;
}
