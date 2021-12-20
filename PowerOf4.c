#include<stdio.h>

int Pow2(int);
int main()
{
	int data;
	printf("Enter a data: ");
	scanf("%d",&data);
	if(Pow2(data)==1)
		printf("The number is Power of 4.\n");
	else
		printf("The number is not Power of 4.\n");
}

int Pow2(int data)
{
	if(data==0)return 0;
	 int c= 0;
	 while((data & 1) == 0) 
	 {
		 c++; 
		 data >>= 1;
	 }
	 if(c%2 == 0) 
		 return 1;
	 else
		 return 0;
}
