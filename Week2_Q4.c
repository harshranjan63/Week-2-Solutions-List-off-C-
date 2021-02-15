#include<stdio.h>
int main()
{
	int a[100][100];
	int r,co,i,j,max=0,t=2,u,v,g=0;
	char ch1;
	char ch2;
	do
	{
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
		max=a[0][0];
		g=a[0][0];
		for(i=0;i<u;i++)
		{
			for(j=0;j<v;j++)
			{
				if(max<a[i][j])
					max=a[i][j];
			}
		}
		for(i=0;i<u;i++)
		{
			for(j=0;j<v;j++)
			{
				if(g>a[i][j])
					g=a[i][j];
			}
		}
		printf("\nThe smallest and largest elements of array are respectively= %d, %d",g,max);
		printf("\nDo you want to enter again?(y/n): ");
		scanf("%s",&ch2);
	}while(ch2=='y');
	return 0;
}
