#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int random = 0;
	int arr[10];
	srand(time(NULL));

	printf("Before : ");
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 1; i < 10; i++) {
		int key = arr[i];
		int j = i - 1;
		
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

	printf("After : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}