#include <iostream>
using namespace std;

int main() {
	int weight, count = 0;
	cin >> weight;

	while (weight > 2) {
		if (weight % 5 == 0) {
			weight -= 5;
			count++;
		}
		else if (weight > 2) {
			weight -= 3;
			count++;
		}
	}

	if (weight == 0)
		cout << count;
	else
		cout << "-1";

	return 0;
}
