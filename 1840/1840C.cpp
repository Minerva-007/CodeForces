#include"stdio.h"

int numRuns[5000]={0};

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n,k,q;
		scanf("%d%d%d",&n,&k,&q);
		int totalcounter=0;
		totalcounter=0;
		int runcount=0;
		runcount=0;
		for(int j=0;j<n;j++)
		{
			runcount=0;
			long int a;
			scanf("%d",&a);
			// check if a is leq q
			if(a<=q)
			{
				totalcounter++;
				runcount++;
				j++;
				if(j>=n)goto lessgoo;
				scanf("%d",&a);
				while(a<=q)
				{
					runcount++;
					j++;
					if(j>=n)break;
					scanf("%d",&a);
				}
				lessgoo: numRuns[totalcounter]=runcount;
			}
		}
		// Determine total feasible runs available
		int fesRuns=0;
		for(int j=1;j<=totalcounter;j++)
			if(numRuns[j]>=k)
			{
				for(int x=0;x<numRuns[j]-k+2;x++)
					fesRuns = fesRuns + x;
			}
		printf("%d\n",fesRuns);
		fesRuns=0;
	}
	return 0;
}