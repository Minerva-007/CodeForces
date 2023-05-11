#include"stdio.h"

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int c;
		int arr[100];
		int x1,x2;
		x1=0;x2=0;
		scanf("%d",&c);
		for(int i=0;i<c;i++)
		{
			scanf("%d",arr+i);
			if(arr[i]%2==0)x1=x1+arr[i]; else x2=x2+arr[i];
		}
		if(x1>x2)printf("yes\n"); else printf("no\n");
	}
}