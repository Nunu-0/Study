#include <iostream>
using namespace std;
//수 정렬하기 3 계수 정렬(Counting Sort)
int main() {
	int n, num;
	int count[10001] = {};

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		count[num]++;
	}

	for (int i = 1; i < 10001; i++){
		for (int j = 0; j < count[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}
