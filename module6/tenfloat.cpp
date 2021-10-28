#include<stdio.h>

void foo(float* numbers, int n)
{
	for(int i = 0; i < n; i++)	
		scanf("%f", &numbers[i]);

		
	for(int i = 0; i < n; i++)	
		printf("%.2f, ", numbers[i]);

}	

int main()
{
	
	float numbers[10];
	int n = sizeof(numbers) / sizeof(numbers[0]);
	printf("%i\n", n);

	foo(numbers, n);
}	

