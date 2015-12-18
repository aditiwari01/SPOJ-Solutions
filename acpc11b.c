#include<stdio.h>
int main()
{
	int i,min,j,a[1000]={0},b[1000]={0},t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		//printf("this");
		scanf("%d",&m);
		for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		if(a[0]<b[0])
		min=b[0]-a[0];
		else
		min=a[0]-b[0];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]>b[j])
				{
					if((a[i]-b[j])<min)
					min=a[i]-b[j];
				}
				else
				{
					if((b[j]-a[i])<min)
					min=(b[j]-a[i]);
				}
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
