#include <iostream>
#include <algorithm>
using namespace std;
//소트인사이드
int main() {
	long long n;
	int arr[12];
	int count = 0;
	cin >> n;
	while (n > 0) {
		arr[count] = n % 10;
		n /= 10;
		count++;
	}
	sort(arr, arr + count);
	for (int i = count - 1; i >= 0; i--)
		cout << arr[i];

	return 0;
}
