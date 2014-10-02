#include <stdio.h>

int main(){
	int counttabs,countblanks,countnewlines = 0;

	int tabs,blanks,newlines;
	while(((tabs =getchar()) != EOF )&& ((newlines =getchar()) != EOF )&&
	((blanks =getchar()) != EOF )){
		if (tabs == '\t')
			++counttabs;
		else if (blanks == ' ')	++countblanks;
		else if (newlines == '\n') ++countnewlines;
printf("Tabs, newlines and blanks are: %d\t %d\t %d\n", counttabs,countnewlines,countblanks);

	}
}
