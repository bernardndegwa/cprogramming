#include <stdio.h>
 
int main(){
	int lower, step, upper;
	int fahr, celcius;
	 
	lower = 0;
	upper = 100;
	step = 5;
	celcius = lower;
	
	printf(" celcius:	fahreinheit:\n");
	while ( celcius <= upper){
	fahr = 9 *(celcius + 32) / 5;
	printf ("%d\t\t%d\n", celcius, fahr);
	celcius +=step;
}
}
