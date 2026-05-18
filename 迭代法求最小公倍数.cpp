#include<stdio.h>
int arr(int a,int b)
{
int	c=a;
	int d;
	while(1)
	{c++;
	   if(c%a==0&&c%b==0)
	   {d=c;
	   	break;
	   	
	   	
	   	
	   }
	}
	return d;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	
    }
	
	
	
	
	
	return 0;
}
long long result = 1;              //
    for (int i = 2; i <= n; i++) {//////
        result = lcm(result, i);//////
    }
