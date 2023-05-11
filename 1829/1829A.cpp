#include"stdio.h"
int main()
{
	int n;
	scanf("%d",&n);
	int c=0;
	for(int i=0;i<n;i++)
	{
		char arr[11];
		scanf("%s",&arr);
		char base[]="codeforces";
		c=0;
		for(int i=0;i<10;i++)
			if(arr[i]-base[i]!=0)c++;
		printf("%d\n",c);
	}
	return 0;
}