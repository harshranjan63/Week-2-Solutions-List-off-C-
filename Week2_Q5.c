#include<stdio.h>
int main()
{
	int i,j,k;
	char ch2;
	do
	{
		for (i = 0; i < 5; i++)
		{
			printf("\n");
    		for (j = 0; j < 5; j++)
    		{
    			if(i==j || j==(4-i))
    				printf("*");
    			else
    				printf(" ");
    		}
    	}
		printf("\nDo you want to print again?(y/n): ");
		scanf("%s",&ch2);
	}while(ch2=='y');
	return 0;
}
