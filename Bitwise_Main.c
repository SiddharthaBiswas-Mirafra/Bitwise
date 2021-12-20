#include<stdio.h>
void _menu(void);
void _Input_Bit(int*);
void _printBin(int);
int _Set_Bit(int,int);
int _Clear_Bit(int,int);
int _Toggle_Bit(int,int);
int _Bit_Status(int,int);
void _Nibble_Swap(unsigned char);
int _Endian(int);

int main()
{
	int data,choice;
	printf("Enter your data: ");
	scanf("%d",&data);
	printf("\n%d: ",data);
	_printBin(data);
	while(1)
	{
		_menu();
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			int pos;
			case 0: if(_Endian(0x01)==1)
					puts("Little Endian");
				else
					puts("Big Endian");
				break;

			case 1:_Input_Bit(&pos);
			       data=_Set_Bit(data,pos);
			       puts("After set ");
			       _printBin(data);break;

			case 2:_Input_Bit(&pos);
			       data=_Clear_Bit(data,pos);
			       puts("After set ");
			       _printBin(data);break;

			case 3:_Input_Bit(&pos);
			       data=_Toggle_Bit(data,pos);
			       puts("After set ");
			       _printBin(data);break;

			case 4:_Input_Bit(&pos);
			       if(_Bit_Status(data,pos)==0)
				       puts("\nThe bit is Clear..\n");
			       else
				       puts("\nThe bit is Set..\n");
			       break;

			case 5:_Nibble_Swap((unsigned char)data);break;
			case 10:return 0;
			default:puts("Invalid choice....");
		}
	}

}

void _menu(void)
{
	printf("0. Endian status\n1. Set a bit\n2. Clear a bit\n3. Toggle a bit\n4. Status a bit\n5. Nibble Swap in a Byte\n");
	printf("10. Exit\n");
}

void _Input_Bit(int *pos)
{
	printf("Enter bit position: ");
	scanf("%d",pos);
}

void _printBin(int n)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",(n>>i)&1);
		if((i%8)==0)
			printf(" ");
	}
	printf("\n");
}

int _Set_Bit(int n,int pos)
{
	return (n|(1<<pos));
}

int _Clear_Bit(int n,int pos)
{
	return (n&~(1<<pos));
}

int _Toggle_Bit(int n,int pos)
{
	return (n^(1<<pos));
}

int _Bit_Status(int data,int pos)
{
	return ((data>>pos)&1);
}

void _Nibble_Swap(unsigned char n)
{
	int i;
	puts("........Before swap......");
	printf("\t%d: ",n);
	for(i=7;i>=0;i--)
	{
		printf("%d",(n>>i)&1);
		if(i%4==0)printf(" ");
	}
	printf("\n");

	n=((n&0xf0)>>4)|((n&0x0f)<<4);
	
	puts("......After swap......");
	printf("\t%d: ",n);
	for(i=7;i>=0;i--)
	{
		printf("%d",(n>>i)&1);
		if(i%4==0)printf(" ");
	}
	printf("\n");
}

int _Endian(int p)
{
	if((char)p&1)
		return 1;
	else
		return 0;
}
