#include <stdio.h> 

int main (void) {
	int N;
	int P;
	int S;
	float MO;
	P = 0;
	S = 0;
	
	do {
		printf("Dwse enan akeraio arithmo:  ");
		scanf("%d", &N);
		P = P + 1;
		S = S + N;
	}
	
	while(N >= 0 && N <= 100);
	printf("To plithos twn aritmwn: %d\n", P);
	printf("To athroisma twn arithmwn einai: %d\n", S);
	MO = S / P;
	printf("Mesos oros twn arithwmn einai: %f\n", MO);
	return 0;
}

