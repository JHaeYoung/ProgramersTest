#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

	
	int s1Cnt = sizeof(s1)/sizeof(s1[0]);
	for(int i=0;i<s1Cnt;i++){
		if(s1[i]==\n)
			return 0;
		printf("%c\n",s1[i]);
	}
	
    return 0;
}

/* good example 
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i=0;s1[i];i++){
        printf("%c\n",s1[i]);
    }
    return 0;
}

*/
