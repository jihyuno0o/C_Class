#include <stdio.h>
#include <conio.h>
#include "MyHeader.h"

int main()
{
//	char ch =getch(); //���� Ű���� �ǵ���
	char buf[1024];
	scanf("%s",buf);
	printf("�Է� ���ڿ��� %s �Դϴ�. \n",buf);
	for(int i=0; buf[i]; i++)
	{
		printf("%c  ",buf[i]);
	}
	
	while(1)
	{
		printf("\n���� �Է�. ");
		int pos = getch()-48;
		
		if (buf[pos] != 0)
			printf("\n%d -> %c ", pos,buf[pos]);
		else
			printf("\n �ùٸ� ���� �Է�"); 

	} 

}

