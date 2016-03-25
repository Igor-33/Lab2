#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {

double dodanok, n;
double sum=0;
double factorial=1, factorial2n=1;

for (n=1;dodanok>=0.001; n++)
{
 factorial=factorial*n;
 factorial2n=factorial2n*(2*n-1)*2*n;
 dodanok=factorial/factorial2n;
 sum=sum+dodanok;
 printf("\n%lf", dodanok);
 
}
printf("\nsum=%lf", sum);
printf("\nn=%lf", n-1);
system("PAUSE");
return 0;
}
