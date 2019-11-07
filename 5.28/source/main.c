#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a;
	printf("¿é¤J¦r¥À¡G");
	scanf_s("%c", &a);
	if (a>='a' && a<='z')
	{
		a = a - 32;
		printf("%c\n", a);
	}
	else if (a <= 'A' && a <= 'Z')
	{
		a = a + 32;
		printf("%c\n", a);
	}
	system("pause");
	return 0;
}