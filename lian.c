#include<stdio.h>
int main()
{ 
	int i,j;
	char c;
	char s[100];
	scanf("%s %c",s,&c);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		{
			for(j=i;s[j]!='\0';j++)
			{s[j]=s[j+1];
			}
		}
	}
  printf("%s",s);
  return 0;
}

