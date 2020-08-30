#include <iostream>
#define PI 3.14159265358979323846
using namespace std;
//택시 기하학
int main() {
	double r; // r = 윈의 반지름

	cout << fixed;
	cout.precision(6); //소수점 6자리까지 나옴
	cin >> r;
	cout << r * r * PI << endl << r * r * 2;

	return 0;
}
