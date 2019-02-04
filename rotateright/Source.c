#include<stdio.h>
int main()
{
	int a[10];
	int n;
	int i = 0;
	int p;
	int count = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &p);
	while (n > 0)
	{
		count++;
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	for (i = 0; i < count; i++)
	{

	}


	return 0;
}