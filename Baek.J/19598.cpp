#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// [19598] 최소 회의실 개수
// 운영체제에서 배운 스케줄링이랑 비슷한 듯
int main() {
	int n, cnt = 0, room = 0; // n = 회의 개수, cnt = 실시간 회의실 개수, room = 최대 회의실 개수
	int s, e; // s = 회의 시작 시간, e = 회의 끝나는 시간

	cin >> n;
	vector <pair<int, bool>> time; // 회의 시간이 들어가는 벡터(배열) <시간, 시작 or 끝>

	for (int i = 0; i < n; i++) { // 회의 시간 입력 반복문
		cin >> s >> e;
		time.push_back({s, true}); // 시작하는 시간 등록
		time.push_back({ e, false}); // 끝나는 시간 등록
		// 시작하는 시간은 ture 끝나는 시간은 false로 구분
	}

	sort(time.begin(), time.end()); // 회의가 시작하는 순서대로 정렬

	for (int i = 0; i < time.size(); i++) {
		if (time[i].second) { // 시작하는 시간(ture)면 회의장 1개 늘리기
			cnt++;
		}
		else { // 끝나는 시간이면 회의장 1개 빼기
			cnt--;
		}
		room = max(cnt, room);
		// 실시간으로 회의실을 가장 많이 사용한 개수를 확인함
	}

	cout << room;

	return 0;
}
