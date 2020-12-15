#include <stdio.h>

int main (void) {
	int i, o = 0;
	
	for(i=1; i<=10; i++) {
		printf("\nH propaideia tou %d", i);
		for(o=1; o<=10; o++) {
			printf("\n%d x %d = %d", i, o, i*o);
		}
	}
	return 0;
}

