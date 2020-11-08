#include<stdio.h>
#include<string.h>

void justone(char*);

int main()
{
	char x[100];
	char* y = x;
	printf("Enter your word : ");
	scanf_s("%s", x, 100);
	justone(y);
	return 0;
}
void justone(char* a)
{
	int i = 0;
	while (*(a + i) != '\0')
	{
		if (*(a + i) != *(a + i + 1))
		{
			printf("%c", *(a + i));
		}
		i++;
	}
}