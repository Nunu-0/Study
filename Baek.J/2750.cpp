#include <iostream>
using namespace std;
//수 정렬하기 sort()사용하지 않기!
//퀵정렬 사용
void sort(int* arr, int l, int r) {
	int temp;
	int pivot = l;
	int left = l + 1;
	int right = r;

	if (l >= r)// 수가 1개이하 남았음으로 return
		return;

	while (left <= right) {
		while(arr[pivot] <= arr[right] && right > l)//right가 pivot 보다 크면 왼쪽으로 이동
			right--;
		while (arr[pivot] >= arr[left] && left <= r)//left가 pivot보다 작으면 오른쪽으로 이동
			left++;

		if (left > right) {//right와 left가 엇갈리게 되면 right와 pivot을 바꾼다
			temp = arr[right];
			arr[right] = arr[pivot];
			arr[pivot] = temp;
		}
		else { //right와 left가 멈추게 되면 둘의 숫자를 바꾼다
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
	sort(arr, l, right);//바뀐 pivot의 위치를 기준으로 오른쪽 정렬
	sort(arr, right + 1, r); //바뀐 pivot의 위치를 기준으로 왼쪽 정렬
}

int main() {
	int n; // n = 숫자 개수
	cin >> n;
	int *arr = new int[n]; // 들어가는 숫자 배열
	for (int i = 0; i < n; i++) { //숫자 입력
		cin >> arr[i];
	}

	sort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) //정렬된 숫자 출력
		cout << arr[i] << endl;

	return 0;
}
