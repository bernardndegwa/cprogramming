#include <stdio.h>
int main(){

	int c,counter;
while((c=getchar()) != EOF){
	if ((c == '\n') || (c == '\t') || (c == ' ')){
		++counter;
}	}
printf("The total of blanks,tabs and spaces are: %d\n",counter);
	}
 
