#include <cstdlib>
#include <iostream>
#include <math.h>


int main()
{
    double k, n;
    double sum=0; 
    scanf("%lf", &n);
    for(k=1;k<n;k++);  {
    
    sum=sum+(1 / pow(5,k));
    }
   printf("sum=%lf", sum);
    system("PAUSE");
    return 0;
}
