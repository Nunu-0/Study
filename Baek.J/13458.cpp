#include <iostream>
#include <vector>
using namespace std;
// 시험 감독
int main() {
	int t, b, c, temp; // t = 시험장 개수, b = 총감독관 감시 수, c = 부감독관 감시 수
	vector <int> p; // 각 시험장의 응시자 수
	long long result = 0; // 감독관 최소 수

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> temp;
		p.push_back(temp);
	}
	cin >> b >> c;

	for (int i = 0; i < t; i++) {
		p[i] -= b; // 총감독관
		result++;
		if (p[i] > 0) {
			result += p[i] / c;
			if (p[i] % c != 0)
				result++;
		}
	}

	cout << result;

	return 0;
}
