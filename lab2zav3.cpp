#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main() 
{
	int m, n, nod, nod1, nod2, r;
	
	printf("\nVvedite m i n, m >= n");
	printf("\nm = ");
	scanf("%d", &m);
	printf("\nn = ");
	scanf("%d", &n);
	
	for(nod1 = m, nod2 = n; nod2 != 0;) {
		nod = nod1 % nod2;
		nod1 = nod2;
		nod2 = nod;			
	}
	
	printf("\nNOD = %d", nod1);
	system("Pause");
	return 0;
}
