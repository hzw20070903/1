#include<stdio.h>
int main()
{ int a,b,c;
  char n;
  float li;
  float sum=0;
  scanf("%c",&n);
  int m;
  scanf("%f",&li);
  m=(int)n;
  float li2;
  li2= li;
  if(m==65)
  {
    sum+=20;
  
      if(li2>3)
      {
          float d=li2-3;
          sum+=5*d;
      }
}
  if(m==66)
  {
      sum+=15;
  
      if(li2>3)
      {
           float d=li2-3;
          sum+=4*d;
      }
  }
      if(m==67)
      {
          sum+=10;
              if(li2>3)
          {
              float d=li2-3;
              sum+=3*d;
          
		  }
	}
      int result=(int)(sum+0.5);
      
      
      
      
      
  printf("%d",result);
  return 0;
  }
    

