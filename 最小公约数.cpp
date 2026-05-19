#include<stdio.h>
int main()
{int i,j;
scanf("%d%d",&i,&j);
int n;
for(n=j;n>0;n--){
	if(i%n==0&&j%n==0)
	{	printf("%d",n);
		break;
	
	}
}
	return 0;
}
