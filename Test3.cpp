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
	
	//����ü ������ �̿��� ���
	printf("name: %s\n",man.name);
	printf("phone: %s\n",man.phone);
	
	//����ü �����͸� Ȱ���� ���1 
	printf("name: %s\n",(*pMan).name);
	printf("phone: %s\n",(*pMan).phone);
	
	//����ü �����͸� Ȱ���� ���2
	printf("name: %s\n",pMan->name);
	printf("phone: %s\n",pMan->phone);
	
}
