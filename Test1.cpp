#include <stdio.h>

int main(void)
{	


/*	int a=1,b=10,result=0; //쓰레기 값으로 초기 
	printf("범위의 누적값 계산을 위한 두 수를 입력하세요.\n");
	scanf("%d %d", &a, &b);
*/	
	 
/*	int c=30, d=40;
	
	a=10;
	b=20;

	printf("%d %d \n",a,b);
	printf("%d %d \n",c,d);
	
	printf("%d \n",++a);
	printf("%d \n",a++);
	printf("%d \n",a);

	a=7;
	if(a>5 & a<10)
		printf("true");
*/
/*	int t=a;
	while(t<=b)
	{
		if(t%2!=0)
		{
			result += t;	
		}
		
		t++;
	}
	
	printf("a=%d b=%d \n",a,b);
	printf("result=%d \n",result);
	
	result =0; //result값 초기화
*/
/*	int res1=0, res2=0;	
	for(int n=a; n<=b; n++)
	{
		if(n%2==0)
		{
			res2+= n;
		}
		else
		{
			res1 +=n;
		}
		if(n%5==0)
		{
			printf("%7d",n);
		}
	 } 
	
	printf("\na=%d b=%d\n",a,b);
	printf("짝수의 합=%d \n홀수의 합=%d\n",res2, res1);
*/	
	int num;
	while(1)
	{		
		scanf("%d",&num);
		if(num==0)
		{
			break;
		}
		else
		{
			switch (num)
			{
				case 1:
					printf("1 : One\n");
					break;
				case 2:
					printf("2 : Two\n");
					break;
				case 3:
					printf("3 : Three\n");
					break;
				case 4:
					printf("4 : Four\n");
					break;
				case 5:
					printf("5 : Five\n");
					break;
				case 6:
					printf("6 : Six\n");
					break;
				case 7:
					printf("7 : Seven\n");
					break;
				case 8:
					printf("8 : Eight\n");
					break;
				case 9:
					printf("9 : Nine\n");
					break;
			}
		}
		
		
	}
	
	return 0;
}

