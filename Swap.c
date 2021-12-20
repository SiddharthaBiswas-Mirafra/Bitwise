#include<stdio.h>
void Swap(int*,int*);

int main()
{
	int data1=40,data2=80;
	puts("..............Before Swap...............");
	printf("Data1: %d     Data2: %d\n",data1,data2);
	Swap(&data1,&data2);
	puts("..............After Swap...............");
	printf("Data1: %d     Data2: %d\n",data1,data2);

}

void Swap(int* p,int* q)
{
	*p=*p^*q;
	*q=*p^*q;
	*p=*p^*q;
}

