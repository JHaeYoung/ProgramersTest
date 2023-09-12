#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(my_string);   //���̸� �߰��ؼ� �޸𸮸� �Ҵ�*** 
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
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.

    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);

    strcpy(answer, my_string);

    len = strlen(overwrite_string);
    memcpy(&answer[s], overwrite_string, len);

    return answer;
}*/
