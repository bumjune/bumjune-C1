#include<Stdio.h>
int changestring(int ch) {
	const int diff = 32;
	if (ch >= 65 && ch <= 90)
		return ch + diff;
	else if (ch >= 97 && ch <= 122)
		return ch - diff;
	else
		return ch;
}
int main(void) {
	int ch,i=1;
	printf("Input> ");
	while (1) {
		ch = getchar();
		if (ch == EOF||ch=='\n')
			break;
		if (i == 1) {
			printf("Output> ");
			i++;
		}
		ch = changestring(ch);
		putchar(ch);
	}
	return 0;
}