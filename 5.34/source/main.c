#include<stdio.h>
#include<stdlib.h>



int main() {
	int x, y, i;
	int n = 1;


	scanf_s("%d %d", &x, &y);
	for (i = 1; i <= y; i++)
	{
		n = n * x;
	}
	printf("%d��%d����O�G%d\n",x,y,n);

	system("pause");
	return 0;
}