#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main(){
int n,i,j;
  printf("Vediti n :");
  scanf("%d",&n);
      for(i=1;i<n;i++)
   {
       int f = 0;
      for (j=2;j<i;j++)
    {
       if(i%j==0)
    {
       f=1;
      break;
    }
   }
      if (f==0)
    printf("%d\n", i);
   }
system("Pause");
return(0);
}
