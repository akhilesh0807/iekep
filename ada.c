#include<stdio.h>
#include<string.h>

int main()
{
	char a[51];
	int i,t,n,k,l,b[4000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		k=0;
		scanf("%s",&a);
		n = strlen(a);
		for(l=0;l<n-1;l++)
		{
			if(a[l+1]==a[l])
			continue;
			else
			k++;
		}

		 b[i]=(k+1)/2;
	}
	for(i=0;i<t;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}
