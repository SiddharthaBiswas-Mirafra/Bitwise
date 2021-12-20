#include<stdio.h>

int Even_Odd(int);
int main()
{
	int data;
	printf("Enter a data: ");
	scanf("%d",&data);
	if(Even_Odd(data)==1)
		printf("The input is Even\n");
	else
		printf("The input is Odd\n");
}

int Even_Odd(int data)
{
	if((data&1)==0)
		return 1;
	else
		return 0;
}
