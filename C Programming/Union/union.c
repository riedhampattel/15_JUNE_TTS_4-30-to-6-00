#include<stdio.h>
union Demo
{
	int num;
	char ch;
};
int main()
{
	union Demo var;
	var.num = 68;
	var.ch = 'a';
	printf("\nValue of num = %d",var.num);
	printf("\nValue of ch = %c",var.ch);
	return 0;
}
