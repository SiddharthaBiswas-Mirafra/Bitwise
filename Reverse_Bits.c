#include<stdio.h>
int Reverse(int);
void _printBin(int);

int main()
{
	int data=0x12345678;
	puts("..............Before Reverse bits...............");
	_printBin(data);
	data=Reverse(data);
	puts("..............After Reverse bits...............");
	_printBin(data);

}

void _printBin(int n)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\n");
}


int Reverse(int data)
{
	int i,j;
	for(i=0,j=31;i<j;i++,j--)
	{
		if(((data>>i)&1)!=((data>>j)&1))
		{
			data=data^(1<<i);
			data=data^(1<<j);
		}
	}
	return data;
}
