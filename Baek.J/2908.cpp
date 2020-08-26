#include <iostream>
#include <string>
using namespace std;
//상수
int main() {
	string A, B, max;
	cin >> A >> B;

	swap(A[0], A[2]);
	swap(B[0], B[2]);

	if (A > B)
		max = A;
	else
		max = B;

	cout << max;

	return 0;
}
