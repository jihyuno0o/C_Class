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

'''

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
