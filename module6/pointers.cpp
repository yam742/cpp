#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float* pF;
       	double* pD;
	int* pI;
	char* pC;

		
	float f = 3.14f ;
       	double d = 2.75;
	int i = 7;
	char c = 'A';
	
	pF = &f;
       	pD = &d;
    	pI = &i;
	pC = &c;

	printf("f = %f, *pF = %f\n", f, *pF);
	printf("d = %f, *pD = %f\n", d, *pD);
	printf("i = %i, *pI = %i\n", i, *pI);
	printf("c = %c, *pC = %c\n", c, *pC);

	*pF = 1.66f;
       	*pD = 9.8;
    	*pI = 368;
	*pC = 'X';

	printf("f = %f, *pF = %f\n", f, *pF);
	printf("d = %f, *pD = %f\n", d, *pD);
	printf("i = %i, *pI = %i\n", i, *pI);
	printf("c = %c, *pC = %c\n", c, *pC);
}	
