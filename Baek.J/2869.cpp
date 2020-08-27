#include <iostream>
using namespace std;
//달팽이는 올라가고 싶다
int main() {
	long long A, B, V; // A = 올라가는 길이, B = 미끄러지는 길이, V = 정상 높이

	cin >> A >> B >> V;
	cout << (V - B - 1) / (A - B) + 1; // 올림 = -1과 +1을 하는 이유는 어떤 숫자던 무조건 작은 정수로 만든 후 1을 더하는 것이다.

	return 0;
}
