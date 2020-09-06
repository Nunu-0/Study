#include <iostream>
using namespace std;
//수 정렬하기 2 (힙 정렬)
int n, num[1000001];

void Heapify(int i) { //자식노드와 부모노드 비교
	int left = 2 * i; // 왼쪽 자식 노드

	if (left < n && num[left] < num[left + 1]) // 오른쪽 자식노드가 크면 left를 오른쪽 자식 노드로
		left++;

	if (num[left] > num[i]){ // 자식노드가 부모노드보다 크면 swap
			swap(num[left], num[i]);
			if (left <= n / 2)
				Heapify(left);
	}
}

void Heapsort(int i) {
	swap(num[1], num[i]); //마지막 노드와 첫번째 노드 바꾸기

	int root = 1;
	int left = 2;

	while (left / 2 < i)
	{
		left = 2 * root;
		if (left < i - 1 && num[left] < num[left + 1]) // 오른쪽 자식노드가 크면 left를 오른쪽 자식 노드로
			left++;
		if (left < i && num[left] > num[root]) // 자식노드가 부모노드보다 크면 swap
			swap(num[left], num[root]);
		root = left;
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = n / 2; i > 0; i--) { // 첫 힙트리 만들기
		Heapify(i);
	}
	for (int i = n; i > 0; i--) { // 힙정렬
		Heapsort(i);
	}

	for (int i = 1; i <= n; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}
