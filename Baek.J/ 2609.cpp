#include <iostream>
using namespace std;
// 최대공약수와 최소공배수
int main(){
	int a, b, c, d;
	cin >> a >> b;
	d = a * b;
	c = 1;

	while (c) { // 유클리드 호제법
		c = a % b;
		a = b;
		b = c;
	}

	cout << a << endl;
	cout << d / a;

	return 0;
}
