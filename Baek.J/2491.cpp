#include <iostream>
#include <algorithm>
using namespace std;
// [2491] 수열
int main() {

	int N, maxi = 1;
	int hcnt = 1, lcnt = 1;
	int num[100010];

	cin >> N;
	for (int i = 0; i < N; i++)
	    cin >> num[i];

	for (int i = 0; i < N - 1; i++) {
		if (num[i] <= num[i + 1])
			hcnt++;
		else
		    hcnt = 1;
		
		if (num[i] >= num[i + 1])
			lcnt++;
		else
		    lcnt = 1;

		int cnt = max(hcnt, lcnt);
		maxi = max(maxi, cnt);
	}

	cout << maxi;
	return 0;
}