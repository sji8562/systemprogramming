#include<stdio.h>
void main(){
	int i,n,m;
	char c;
	printf("반복할 수 입력 : ");
	scanf("%d",&n);
	for(i = 1;i<=n;i++){
		printf("반복할 문자와 반복할 수 입력: ");
		getchar();
		scanf(" %c  %d  ",&c,&m);
	       	for(int j = 1;j<=m;j++){
		printf("%c",c);
		}
	}
}	
