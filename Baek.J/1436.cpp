#include <iostream>
#include <string>
using namespace std;
//영화감독 숌
int main() {
	int n, num = 665; //n = 번째, num = 숫자
	string nums;
	int count = 0;
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);//속도 최적화

	cin >> n;
	while (1) {
		num++;
		nums = to_string(num); //num을 문자열로 바꿈

		if (nums.find("666") != -1) //num에 666이 포함돼있다면
			count++;

		if (n == count)
			break;
	}
	cout << num;

	return 0;
}
