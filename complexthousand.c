#include <stdio.h>

int main (void) {
	int i, o = 0;
	
	for(i=30; i <=1000; i++) {
		
	    if(i%7 == 0 && !( (i>50 && i<60) || (i>500 && i<600) )) {
		printf("\n%d", i);
	}
}
return 0;
}
		
	
