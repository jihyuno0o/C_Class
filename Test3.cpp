#include <stdio.h>

struct person{
	char name;
	char phone;
}; 
int main(void)
{
	struct person man={"Thomas","365-0000"};
	struct person * pMan;
	pMan=&man;
	
	//구조체 변수를 이용한 출력
	printf("name: %s\n",man.name);
	printf("phone: %s\n",man.phone);
	
	//구조체 포인터를 활용한 출력1 
	printf("name: %s\n",(*pMan).name);
	printf("phone: %s\n",(*pMan).phone);
	
	//구조체 포인터를 활용한 출력2
	printf("name: %s\n",pMan->name);
	printf("phone: %s\n",pMan->phone);
	
}
