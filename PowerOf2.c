#include<stdio.h>

int Pow2(int);
int main()
{
	int data;
	printf("Enter a data: ");
	scanf("%d",&data);
	if(Pow2(data)==0)
		printf("The number is Power of 2.\n");
	else
		printf("The number is not Power of 2.\n");
}

int Pow2(int data)
{
	if(data==0)
		return 1;
	return (data&(data-1));
}
