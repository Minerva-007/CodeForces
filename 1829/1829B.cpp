#include"stdio.h"

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int nn;
		scanf("%d",&nn);
		int count=0;
		int maxcount=0;
		for(int ii=0;ii<nn;ii++)
		{
			int s;
			scanf("%d",&s);
			if(s==0)count++;
			else
			{
				if(count>maxcount)maxcount=count;
				count=0;
			}
		}
		if(count>maxcount)maxcount=count;
		printf("%d\n",maxcount);
	}
	return 0;
}