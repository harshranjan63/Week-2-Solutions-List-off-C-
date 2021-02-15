#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch[200],c;
	int i,w;
	do
	{
		printf("Please enter the string you want to check: ");
		gets(ch);
		for(i=0;ch[i]!='\0';i++)
		{
			if(ch[i]==' ' || ch[i]=='\t' || ch[i]=='\n')
			{
				w++;
			}
		}
		printf("Total no of worrds= %d",w);
		printf("\nDo you want to enter again?(y/n): ");
		scanf("%s",&c);
	}while(c=='y');
	return 0;
}
