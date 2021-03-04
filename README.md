# C_Class
kosta-2021

## 2021-03-02
%8d, %8.2f, sizeof(int)=4 byte

## 2021-03-03
관계 연산자(비교 연산자)의 기준을 왼쪽으로 잡기
a<b ; a가 b보다 작은가 (b가 a보다 큰가 X)
void ; 정해지지 않은 타입, 주로 포인터와 결합되어서 사용됨

0100 1111 =79
0011 0011 =51
1010 1001 =-41
1111 0000 =-112

char<int<long<float<double<long double 바이트크기 ; 데이터 손실이 최소화되는 방향으로 형 변환

while(1) -> continue : 나머지 루프 건너 뛰고 다시 루프 반복 , break : 반복문 탈출

scanf("%d",&변수);  : &-> 입력될 주소?

```
#include <stdio.h>

int main()
{

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
}	
```

### 2021-03-04

전역변수(Global Variable)는 정적변수(Static Variable)이다.
전역변수는 같은 이름의 지역 변수에 의해서 가려지기도 한다.

배열; 많은 양의 데이터를 일괄적으로 처리해야하는 경우에 유용. 둘 이상의 변수를 동시에 선언하는 효과

문자=1byte char=ASCII
문자열상수=char array + null :문자열이면서 상수의 특징을 지니다. 
ex) char str1[5] ="Good"; -> Good0 =>0이 null (null이 문장의 끝을 나타냄)

포인터'*' 는 배열이다. (주소저장)
void function1(int*a) { ... }

```
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
```
