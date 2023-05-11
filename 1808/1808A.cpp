#include"stdio.h"

signed char table[1000000]={0};

int findmax(int a[6])
{
	int max = a[0];
	for(int i=0;i<6;i++)if(a[i]>max)max=a[i];
	return max;
}

int findmin(int a[6])
{
	//Skip zeroes
	int i=0;
	for(int k=0;k<6 && a[i]==0;k++,i++);
	if(i>5)return 0;
	int min=a[i];
	for(;i<6;i++)if(a[i]<min)min=a[i];
	return min;
}

void generatetable()
{
	int a[6];
	for(a[0]=0;a[0]<2;a[0]++)
		for(a[1]=0;a[1]<10;a[1]++)
			for(a[2]=0;a[2]<10;a[2]++)
				for(a[3]=0;a[3]<10;a[3]++)
					for(a[4]=0;a[4]<10;a[4]++)
						for(a[5]=0;a[5]<10;a[5]++)
						{
							int index = a[0]*100000+a[1]*10000+a[2]*1000+a[3]*100+a[4]*10+a[5];
							table[index] = findmax(a) - findmin(a);
							//printf("%d %d\n",index, table[index]);
						}
	
}

int main()
{
	int n;
	generatetable();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		int luck = table[l];
		int index=l;
		for(int j=l;j<r+1;j++)if(table[j]>luck){luck=table[j];index = j;}
		printf("%d\n",index);
	}
}