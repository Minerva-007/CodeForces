#include"stdio.h"
#include"string.h"

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int l;
		scanf("%d",&l);
		char c[101];
		scanf("%s",&c);
		for(int j=0;j<l;)
		{
			// Take a character
			printf("%c",c[j]);
			char x=c[j];
			j++;
			// Skip all characters
			while(x!=c[j])j++;
			j++;
		}
		printf("\n");
	}
}