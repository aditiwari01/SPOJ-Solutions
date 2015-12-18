#include<stdio.h>
#include<string.h>
int main()
{
	int n,l1,l2,s[1000]={0};
	int j,x,y,f,co,i=0,c;
	char a[1000],b[1000];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",a);
		scanf("%s",b);
		l1=strlen(a);
		l2=strlen(b);
		j=i=c=f=co=0;
		while(1)
		{   
		    x=y=0;
			if(i<l1)
			x=a[i]-48;
			
			if(i<l2)
			y=b[i]-48;
	
			s[i]=(x+y+c)%10;
			c=(x+y+c)/10;
			i++;
			if(i>=l1&&i>=l2)
			break;
		}
		s[i]=c;
		j=i;
		for(i=0;i<=j;i++)
		{
			if(s[i]!=0)
			f=1;
			if(s[i]==0&&f==0)
			continue;
	
			if(s[i]!=0)
			{
				while(co--)
				printf("0");
				printf("%d",s[i]);
				co=0;
			}
			else
			co++;
		}
		printf("\n");
	}	
	return 0;
}
