#include<stdio.h>
#include<stdlib.h>

int main() {
	int x, y, i, LCM;

	scanf_s("%d %d", &x, &y);
	for (i = 1; i <= x * y; i++)
	{
		if (i%x == 0 && i%y == 0)
		{
			LCM = i;
			break;
		}
	}
	printf("%d", LCM);

	system("pause");
	return 0;
}