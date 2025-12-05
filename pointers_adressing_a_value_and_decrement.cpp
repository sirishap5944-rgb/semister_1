#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("adress of a:%p\n",&a);
	printf("adress by using pionter :%p\n",p);
	p++;
	printf("after increment adress is :%p\n",p);
	p--;
	printf("after decrement adress is :%p\n",p);
}
