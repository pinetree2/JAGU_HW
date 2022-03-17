#include <stdio.h>
#include <time.h>
#define MAX_SIZE 1000

int MaxSubarray(int A[], int n) {
	int MaxSum, ThisSum;
	int i, j, k;

	MaxSum = 0;

	for (i = 0; i < n; i++) {
		for (j = i j < n; j++) {
			ThisSum = 0;
			for (k = i; k <= j; k++) 
				ThisSum = ThisSum + A[k];
			MaxSum = max(MaxSum, ThisSum);
			
		}
	}
	return MaxSum;
}

int main(void) {
	clock_t start, end;
	int add = 1000;
	double result;
	int A[MAX_SIZE];


	printf("    n    time\n");
	for (n = 1000; n <= 10000; n += add) {
		start = clock();
		MaxSubarray(A, n);
		end = clock();
		result = ((double)(end - start)) / CLOCKS_PER_SEC;
		printf("%6d    %f\n", n, result);
		
	}
	
}