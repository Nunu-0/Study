#include <iostream>
#include <vector>
using namespace std;
//수 정렬하기 (버블 정렬)
int main() {
	int n, temp;
	vector <int> num;

	cin >> n;
	for (int i = 0; i < n; i++) { // 수 입력
		cin >> temp;
		num.push_back(temp);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++)
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
	}

	for (int i = 0; i < n; i++) { // 정렬한 수 출력
		cout << num[i] << endl;
	}

	return 0;
}
