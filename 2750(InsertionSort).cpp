#include <iostream>
#include <vector>
using namespace std;
//수 정렬하기 (삽입정렬)
int main() {
	int n, temp; // 숫자 개수
	vector <int> num; // 정렬 할 숫자

	cin >> n;
	for (int i = 0; i < n; i++) { // n개의 수 입력
		cin >> temp;
		num.push_back(temp);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) { // 정렬한 수 출력
		cout << num[i] << endl;
	}

	return 0;
}
