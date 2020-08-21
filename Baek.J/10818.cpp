#include <iostream>
using namespace std;

int list[1000000]; //정수의 한계

int main(){
	int count = 0; //정수의 개수
	int min = 1000000;
	int max = -1000000;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> list[i]; // 정수 입력

		if (min > list[i]) //최소값
			min = list[i];
		if (max < list[i]) //최대값
			max = list[i];
	}
	cout << min << " " << max;

	return 0;
}
