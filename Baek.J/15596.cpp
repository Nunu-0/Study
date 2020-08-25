#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<int> list(n);
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	cout << sum(list);
	return 0;
}
