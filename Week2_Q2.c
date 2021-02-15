#include<stdio.h>
int main()
{
	char ch2;
	do
	{
		int a[100][100];
		int r,co,i,j,sum=0,t,u,v,g=0;
		char ch1;
		printf("Please enter the no. of rows and column= ");
		scanf("%d",&r);
		scanf("%d",&co);
		u=r;
		v=co;
		printf("Do you want to have costum array or preset?(c/p): ");
		scanf("%s",&ch1);
		if(ch1=='c')
		{
			printf("Please enter the elements in the array: ");
			for (i = 0; i < u; ++i)
    			for (j = 0; j < v; ++j)
    			{
    				scanf("%d", &a[i][j]);
    			}	
			printf("\nThe arrayis :- \n");
			for(i=0;i<u;i++)
			{
				for(j=0;j<v;j++)
					printf("%d ",a[i][j]);
				printf("\n");
			}	
		}
		else if(ch1=='p')
		{
			printf("\nThe array is:-\n");
			for(i=0;i<u;i++)
			{
				for(j=0;j<v;j++)
				{
					t++;
					printf("%d ",t);
					a[i][j]=t;
				}
				printf("\n");
			}
		}
		for(i=0;i<u;i++)
		{
			for(j=0;j<v;j++)
			{
				if(a[i][j]%2==0)
					sum=sum+a[i][j];
			}
		}
		printf("\nSum of all even elements= %d",sum);
		printf("\nElements at even place= ");
		for(i=0;i<u;i++)
		{
			for(j=0;j<v;j++)
			{
				g++;
				if((g)%2==0)
				{
					printf("%d ",a[i][j]);
				}
			}
		}
		printf("Do you want to enter again?(y/n): ");
		scanf("%s",&ch2);
	}while(ch2=='y');
	return 0;
}
