#include <iostream>
using namespace std;
// Åº»ê À½·á
int main() {
	int e, f, c, drink = 0;

	cin >> e >> f >> c;
	e = e + f;
	while (e >= c) {
		drink = drink + (e / c);
		e = (e / c) + (e % c);
	}
	cout << drink;

	return 0;
}