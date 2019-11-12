#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	printf("부모 프로세스 시작\n");
	if(fork() == 0) {
		execl("/bin/echo", "echo", "Hello", NULL);
		fprintf(stderr, "첫 번째 실패");
		exit(1);
	}

	if(fork() == 0) {
		execl("/bin/date", "date", NULL);
		fprintf(stderr, "두 번째 실패");
		exit(2);
	}

	if(fork() == 0) {
		execl("/bin/ls", "ls", "-l", NULL);
		fprintf(stderr, "세 번째 실패");
		exit(3);
	}

	printf("부모 프로세스 끝\n");
}
