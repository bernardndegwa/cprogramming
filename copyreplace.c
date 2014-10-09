#include <stdio.h>
#define ESC_CHAR '\\'

int main(){

	int c;
	int replace =0;
while((c=getchar()) != EOF){
	
	switch(c){
		case('\t'):
		putchar(ESC_CHAR);
		putchar('t');
		replace = 1;
		break;

		case('\b'):
		putchar(ESC_CHAR);
		putchar('b');
		replace = 1;
		break;
		
		case(ESC_CHAR):
		putchar(ESC_CHAR);
		putchar(ESC_CHAR);
		replace = 1;
		break;

		default:
		putchar(c);
		break;
	}
}
return 0;
} 
