#include <stdio.h>
#include <stdlib.h>

        
int main() { 
 int n, i = 1; 
 printf("Vvediti chislo : ");
 scanf("%d", &n); 
 
 while (n /= 10) 
 i++; 
 
 printf("%d\n", i); 
 system("pause");
 return 0; 
} 


    
   

 
