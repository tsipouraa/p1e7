#include <stdio.h>

int main (void) {
	int N;
	printf("Dwse enan akeraio arithmo\n");
	scanf("%d", &N);
	
	if(N < 0) {
		printf("error: O arithmos %d einai arnitikos", N);
		return 0;
	}
	
	if(N == 0) {
		printf("O arithmos einai miden");
		return 0;
	}
	
	if(N%2 == 0) {
		printf("even number");
		return 0;
	}
	
	else {
		printf("odd number");
	}
	return 0;
}
