#include"stdio.h"

bool func(int s, int t)
{
	if(s==t)
		return true;
	if (s>t && s%3==0)
		{
			return func(s/3,t) || func((2*s)/3,t);
		}
	return false;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int s,t;
		scanf("%d%d",&s,&t);
		printf("%s\n",(func(s,t)==true)?"yes":"no");
	}
	return 0;
}