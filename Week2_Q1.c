#include<stdio.h>
int main()
{
	int a,num=0,sum=0,b;
	char ch;
	do
	{
		printf("Please Enter the number= ");
		scanf("%d",&a);
		while(a)
		{
			b=a%10;
			a=a/10;
			sum=sum+b;	
		}
		printf("Sum of digits= %d",sum);
		printf("\nDo you want to enter again?(y/n): ");
		scanf("%s",&ch);
	}while(ch=='y');
	return 0;
}
