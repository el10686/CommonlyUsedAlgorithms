#include <stdio.h>

int binarysearch(int A[], int key, int left, int right) {

	if(left <= right) {

		int mid;

		mid = (left + right) / 2;

		if (key == A[mid]) {
			return mid;
		}

		if (key < A[mid]) {
			return binarysearch(A, key, left, mid - 1);
		}
		else {
			return binarysearch(A, key, mid + 1, right);
		}
	}

	return -1;
}

int main() {

	int i, n, key, ret;
	scanf("%d", &n);
	int A[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	scanf("%d", &key);
	ret = binarysearch(A, key, 0, n - 1);
	printf("%d\n", ret);

	return 0;
}
