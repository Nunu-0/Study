#include <iostream>
#include <vector>
using namespace std;
// 수 정렬하기2 (병합 정렬)

void merge(int arr1[], int left, int right) {
	int* arr2 = new int[right + 1];
	int mid = (left + right) / 2;
	int l = left;
	int r = mid + 1;
	int p = left; // 배열 위치

	while (l <= mid && r <= right) {
		if (arr1[l] <= arr1[r]) {
			arr2[p++] = arr1[l++];
		}
		else {
			arr2[p++] = arr1[r++];
		}
	}
	//남은 수
	while (p <= right) {
		if (l > mid) {
			arr2[p++] = arr1[r++];
		}
		else {
			arr2[p++] = arr1[l++];
		}
	}

	for (int i = left; i <= right; i++) { // 정렬한 수 등록
		arr1[i] = arr2[i];
	}

	delete[] arr2;
}

void partition(int arr1[],int left, int right) { // 수 분할
	if (left < right) {
		int mid = (left + right) / 2;
		partition(arr1, left, mid);
		partition(arr1, mid + 1, right);
		merge(arr1, left, right);
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int* arr1 = new int[n];

	for (int i = 0; i < n; i++) { // 수 입력
		cin >> arr1[i];
	}

	partition(arr1, 0, n - 1);

	for (int i = 0; i < n; i++) { // 정렬한 수 출력
		cout << arr1[i] << "\n";
	}

	delete[] arr1;

	return 0;
}
