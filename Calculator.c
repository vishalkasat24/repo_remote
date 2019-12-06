#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("1. add 2.subs 3.mul 4. divide");
    scanf("%d",c);

    switch(c)
    {
        case 1: printf("Sum is %d",a+b);
                break;
        case 2:printf("subs is %d",a-b);
                break;
        case 3: printf("Mul is %d",a*b);
                    break;
        case 4: printf("Div is %d",a/b);
                break;


    }
}