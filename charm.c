#include<stdio.h>
int main()
{
	int T;
	int number;
	int i,j;
	static int charm[100000][3];
	static int num[100000]={0};
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&number);
		for(i=0;i<number;i++)
		{
			scanf("%d%d%d",&charm[i][0],&charm[i][1],&charm[i][2]);
		}
		for(i=0;i<number-1;i++)
		{
			for(j=i+1;j<number;j++)
			{
				if(charm[i][0]>=charm[j][0]&&charm[i][1]>=charm[j][1]&&charm[i][2]>=charm[j][2])
				{
					num[i]++;
				}
				if(charm[i][0]<=charm[j][0]&&charm[i][1]<=charm[j][1]&&charm[i][2]<=charm[j][2])
				{
					num[j]++;
				}
			}
		}
		for(i=0;i<number;i++)
		{
			printf("%d\n",num[i]);
		}
	}

}