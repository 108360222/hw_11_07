#include<stdio.h>
#include<stdlib.h>




int main() {
	
	unsigned long long int f,i;
	unsigned long long int a=0, b=1, r;

	printf("\t  %d\n\t  1\n", a);
	for (i = 1; i < 46; i++)
	{
		r = a + b;
		printf("%11u\n", r);
		a = b;
		b = r;
	}
	

	system("pause");
	return 0;
}