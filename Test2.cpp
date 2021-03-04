#include <stdio.h>
#include <conio.h>
#include "MyHeader.h"

int main()
{
//	char ch =getch(); //단일 키값을 되돌림
	char buf[1024];
	scanf("%s",buf);
	printf("입력 문자열은 %s 입니다. \n",buf);
	for(int i=0; buf[i]; i++)
	{
		printf("%c  ",buf[i]);
	}
	
	while(1)
	{
		printf("\n숫자 입력. ");
		int pos = getch()-48;
		
		if (buf[pos] != 0)
			printf("\n%d -> %c ", pos,buf[pos]);
		else
			printf("\n 올바른 숫자 입력"); 

	} 

}

