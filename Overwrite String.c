#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);   //길이를 추가해서 메모리를 할당*** 
	char* answer = (char*)malloc(len+1);       
	
	strncpy(answer,my_string,s);
	answer[s] = '\0';
	strcat(answer, overwrite_string);
	strcat(answer, my_string + s + strlen(overwrite_string));	
    
/*	strcpy(answer, my_string);
    len = strlen(overwrite_string);
    memcpy(&answer[s], overwrite_string, len); */
    
    return answer;
}

int main(){
	
	printf("%s",solution("Program29b8UYP","merS123",7));
	return 0;
}

/*char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);

    strcpy(answer, my_string);

    len = strlen(overwrite_string);
    memcpy(&answer[s], overwrite_string, len);

    return answer;
}*/
