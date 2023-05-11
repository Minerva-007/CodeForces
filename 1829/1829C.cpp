#include"stdio.h"

int main()
{
	int n;
	scanf("%d",&n);
	int skill1=200001,skill2=200001,skillboth=200001;
	for(int i=0;i<n;i++)
	{
		skill1=200001;skill2=200001;skillboth=200001;
		int nb;
		scanf("%d",&nb);
		for(int j=0;j<nb;j++)
		{
			int time,skillz;
			scanf("%d%d",&time,&skillz);
			switch(skillz)
			{
				case 0:
					break;
				case 1:
					//skill1
					if(time<skill1)skill1=time;
					break;
				case 10:
					if(time<skill2)skill2=time;
					break;
				case 11:
					if(time<skillboth)skillboth=time;
					break;
			}
		}
		if(skillboth==200001)
		{
			if(skill1==200001 || skill2==200001)
				printf("-1\n");
			else
				printf("%d\n",skill1+skill2);
		}
		else
		{
			if(skillboth<skill1+skill2)
				printf("%d\n",skillboth);
			else
				printf("%d\n",skill1+skill2);
		}
	}
	return 0;
}