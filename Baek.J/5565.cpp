#include <iostream>
using namespace std;
// 영수증
int main() {
	int gross, price; // 총 값, 책 가격
	cin >> gross;
	for (int i = 0; i < 9; i++) {
		cin >> price;
		gross -= price;
	}
	cout << gross;

	return 0;
}
