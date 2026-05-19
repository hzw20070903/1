#include <iostream>
#include<stdio.h>
#include <cmath>
#include<math.h>
using namespace std;
void paixu(int &a,int &b)
{if(a<b){
  int temp=b;
  b=a;
  a=temp;
}


}
int main()
{
  int arr[100];
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int j=0;j<n;j++)
  
  {for(int q=0;q<n-j-1;q++)
    {
    paixu(arr[q],arr[q+1]);
    }


  }
  float sum=(float)arr[0]/arr[1]; //0.75;


int p=0;
   while(p<10)
   {
     if(fabs(sum - (int)sum) < 0.000001)
     {
       break;
     }
     else{
       sum=sum*10;
       p++;
       
     }
     
   }
int u;
int m=1;
for(int b=0;b<p;b++)
{
	m*=10;
}
int sum2=(int)(sum);
int sum3=m;
for(u=sum3;u>0;u--)
{
	if(sum2%u==0&&sum3%u==0)
	{
		break;
		
	}
	
}
sum2=sum2/u;
sum3=sum3/u;
printf("%d%d",sum3,sum2);







  
  return 0;
}
