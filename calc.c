#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter two numbers : ");
	scanf("%d %d",&b,&c);
	printf("1.add \n 2.substract \n 3.multiply \n 4.divison");
	printf("Enter your choice :");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1: printf("Sum is %d",a+b);
			break;
		
		case 2: printf("subtraction  is %d",a-b);
			break;

		case 3: printf("Multipplication is  %d",a*b);
			break;
		
		case 4 :printf("Division is %d",a/b);
			break;
		
	}
}

