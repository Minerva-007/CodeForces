#include"stdio.h"

signed char arr[10000];

void generatearr()
{
	for(int i1=0;i1<10;i1++)
		for(int i2=0;i2<10;i2++)
			for(int i3=0;i3<10;i3++)
				for(int i4=0;i4<10;i4++)
				{
					int index = i1*1000 + i2*100 + i3*10 + i4;
					int poll[10];
					for(int i=0;i<10;i++)poll[i]=0;
					poll[i1]++; poll[i2]++; poll[i3]++; poll[i4]++;
					for(int i=0;i<10;i++)
					{
						// Case 1: find any 4
						if(poll[i]==4){arr[index] = -1;goto exeunt;}
						// Case 2: find any 3
						if(poll[i]==3){arr[index] = 6;goto exeunt;}
					}
					//Last case: all 1's or all 2's or a 2 and two 1's so 
					arr[index] = 4;
					exeunt:
						index++;//Dummy instruction
				}
}

int main()
{
	int n;
	scanf("%d",&n);
	generatearr();
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",arr[x]);
	}
}