#include <iostream>
using namespace std;

int main() {
	int cls, std;
	double ratio[1001] = {};//평균을 넘는 학생 비율
	double aver;//반 평균
	cin >> cls;

	for (int i = 0; i < cls; i++) {
		aver = 0;
		int score[1001] = {};
		cin >> std;
		for (int j = 0; j < std; j++) {
			cin >> score[j];
			aver += score[j];
		}
		aver /= std;
		for (int k = 0; k < std; k++) {
			if (aver < score[k])
				ratio[i]++;
		}
		ratio[i] = ratio[i] * 100 / std;
	}
	for (int i = 0; i < cls; i++) {
		cout << fixed;
		cout.precision(3);
		cout << ratio[i] << "%" << endl;
	}
	return 0;
}
