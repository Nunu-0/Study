#include <iostream>
using namespace std;
//벌집
int main() {
	long long num, sum = 1, count = 1;
	cin >> num;
	while (sum < num) {
		sum += 6 * count;
		count++;
	}
	cout << count;
	return 0;
}
