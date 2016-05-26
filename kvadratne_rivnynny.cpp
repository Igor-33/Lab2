#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <math.h> 
#include <stdio.h>

int main()
{
  float A, B, C, D;
  float x1, x2;
  printf("A = ");
  scanf("%d", &A);
  if (A == 0) {
    printf("Nema rozvyzkiv.\n");
    system("Pause");
    return 0;
  }
  
  printf("B = ");
  scanf("%d", &B);
  printf("C = ");
  scanf("%d", &C);

  D = B * B - 4 * A * C;
  if (D == 0) {
    printf("x = %f\n", -B / 2.0 / A);
     system("PAUSE");
      return 0;
  }
  
  if (D > 0) {
    printf("x1 = %f\nx2 = %f\n",
           (-B + sqrt(D)) / 2.0 / A, (-B - sqrt(D))/ 2.0 / A);
  } else {
    printf("x1 =  %f\nx2 =  %f\n",
           -B / 2.0 / A, sqrt(-D) / 2.0 / A, -B / 2.0 / A, -sqrt(-D) / 2.0 /A);
  }

    
    system("PAUSE");
    return 0;
}

