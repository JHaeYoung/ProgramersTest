#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

	int s1Cnt = sizeof(s1)/sizeof(s1[0]);
	for(int i=0;i<s1Cnt;i++){
		printf("%c\n",s1[i]);
	}
	
    return 0;
}

